#include "TypeChecker.h"

void TypeChecker::visitStatementAssignment(StatementAssignment *p) {
    if (!newSymbolTable.contains(p->ident_)) {
        error("Can not assign value to undeclared variable " + p->ident_);
    }

    auto *newType = visit(p->value_);
    if (!newType->coercesTo(newSymbolTable[p->ident_])) {
        error("Can not assign value of type " + newType->toString() + " to variable " + p->ident_ + " of type " +
              newSymbolTable[p->ident_]->toString());
    }
}

void TypeChecker::visitStatementVarDecl(StatementVarDecl *p) {
    if (newSymbolTable.containsAtCurrentLayer(p->ident_)) {
        error("Error at variable definition " + p->ident_ + ". Variable already defined");
    }

    StingrayType *type = visit(p->typereference_);

    if (type->equals(new SgBaseType(EBaseType::NOTHING))) {
        error("Variable can not have type NOTHING");
    }

    newSymbolTable.putAtCurrentLayer(p->ident_, type);

    printType(p->ident_, type);
}

void TypeChecker::visitStatementVarDef(StatementVarDef *p) {
    if (newSymbolTable.containsAtCurrentLayer(p->ident_)) {
        error("Error at variable definition " + p->ident_ + ". Variable already defined");
    }

    StingrayType *valueType = visit(p->value_);
    if (valueType->equals(new SgBaseType(EBaseType::UNTYPED))) {
        error("Variable type should be specified, if value is empty");
    }

    newSymbolTable.putAtCurrentLayer(p->ident_, valueType);
    printType(p->ident_, valueType);
}

void TypeChecker::visitStatementVarDefAsc(StatementVarDefAsc *p) {
    if (newSymbolTable.containsAtCurrentLayer(p->ident_)) {
        error("Error at variable definition " + p->ident_ + ". Variable already defined");
    }

    StingrayType *valueType = visit(p->value_);
    StingrayType *ascType = visit(p->typereference_);

    if (valueType->coercesTo(ascType)) {
        newSymbolTable.putAtCurrentLayer(p->ident_, ascType);
        printType(p->ident_, ascType);
    } else {
        error("Error at variable definition " + p->ident_ + ". Variable type and value type are not the same.");
    }
}

void TypeChecker::visitValueArrowed(ValueArrowed *p) { returnValue(visit(p->expression_)); }

void TypeChecker::visitValueBraced(ValueBraced *p) { returnValue(visit(p->expression_)); }

void TypeChecker::visitStatementIf(StatementIf *p) { p->statementif__->accept(this); }

void TypeChecker::visitIfStatement(IfStatement *p) {
    StingrayType *exprType = visit(p->expression_);

    if (!exprType->coercesTo(new SgBaseType(EBaseType::BOOLEAN))) { // todo
        error("Expression in if statement should have type boolean, but has: " + exprType->toString());
    }

    newSymbolTable.pushLayer();
    p->body__->accept(this);
    newSymbolTable.popLayer();
}

void TypeChecker::visitIfElseIfStatement(IfElseIfStatement *p) {
    StingrayType *exprType = visit(p->expression_);

    if (!exprType->coercesTo(new SgBaseType(EBaseType::BOOLEAN))) { // todo
        error("Expression in if statement should have type boolean, but has: " + exprType->toString());
    }

    newSymbolTable.pushLayer();
    p->body__->accept(this);
    newSymbolTable.popLayer();

    p->statementif__->accept(this);
}

void TypeChecker::visitIfElseStatement(IfElseStatement *p) {
    StingrayType *exprType = visit(p->expression_);

    if (!exprType->coercesTo(new SgBaseType(EBaseType::BOOLEAN))) { // todo
        error("Expression in if statement should have type boolean, but has: " + exprType->toString());
    }

    newSymbolTable.pushLayer();
    p->body__1->accept(this);
    newSymbolTable.popLayer();

    newSymbolTable.pushLayer();
    p->body__2->accept(this);
    newSymbolTable.popLayer();
}

void TypeChecker::visitStatementWhile(StatementWhile *p) {
    StingrayType *exprType = visit(p->expression_);

    if (!exprType->coercesTo(new SgBaseType(EBaseType::BOOLEAN))) { // todo
        error("Expression in while statement should have type boolean, but has: " + exprType->toString());
    }

    newSymbolTable.pushLayer();
    p->body__->accept(this);
    newSymbolTable.popLayer();
}

void TypeChecker::visitStatementFor(StatementFor *p) {
    newSymbolTable.pushLayer();
    newSymbolTable.putAtCurrentLayer(p->ident_, new SgBaseType(EBaseType::INTEGER));
    p->body__->accept(this);
    newSymbolTable.popLayer();
}

void TypeChecker::visitStatementReturnValue(StatementReturnValue *p) {
    p->expression_->accept(this); // todo make it check if the function really returns value of correct type
}

void TypeChecker::visitBody(Body *p) {
    for (auto *statement : *p->liststatement_) {
        statement->accept(this);
    }
}