#include "InterpretationVisitor.h"


void InterpretationVisitor::visitDecl(Decl *p) {}
void InterpretationVisitor::visitTypeReference(TypeReference *p) {}
void InterpretationVisitor::visitExtends(Extends *p) {}
void InterpretationVisitor::visitFieldDef(FieldDef *p) {}
void InterpretationVisitor::visitStatics(Statics *p) {}
void InterpretationVisitor::visitCBody(CBody *p) {}
void InterpretationVisitor::visitFuncDecl(FuncDecl *p) {}
void InterpretationVisitor::visitFuncDefn(FuncDefn *p) {}
void InterpretationVisitor::visitFuncDomain(FuncDomain *p) {}
void InterpretationVisitor::visitFuncRange(FuncRange *p) {}
void InterpretationVisitor::visitFuncParam(FuncParam *p) {}
void InterpretationVisitor::visitFuncRangeNamed(FuncRangeNamed *p) {}
void InterpretationVisitor::visitStatement(Statement *p) {}
void InterpretationVisitor::visitStatementIf_(StatementIf_ *p) {}
void InterpretationVisitor::visitBody_(Body_ *p) {}
void InterpretationVisitor::visitValue(Value *p) {}
void InterpretationVisitor::visitExpression(Expression *p) {}
void InterpretationVisitor::visitFuncCall(FuncCall *p) {}
void InterpretationVisitor::visitRangeExpr(RangeExpr *p) {}
void InterpretationVisitor::visitUnsteppedRangeExpression(UnsteppedRangeExpression *p) {}
void InterpretationVisitor::visitRangeBody_(RangeBody_ *p) {}
void InterpretationVisitor::visitNothingType(NothingType *p) {}
void InterpretationVisitor::visitBoolType(BoolType *p) {}
void InterpretationVisitor::visitIntegerType(IntegerType *p) {}
void InterpretationVisitor::visitDoubleType(DoubleType *p) {}
void InterpretationVisitor::visitStringType(StringType *p) {}
void InterpretationVisitor::visitArrayType(ArrayType *p) {}
void InterpretationVisitor::visitClassType(ClassType *p) {}
void InterpretationVisitor::visitUserType(UserType *p) {}
void InterpretationVisitor::visitExtendsEmpty(ExtendsEmpty *p) {}
void InterpretationVisitor::visitExtendsList(ExtendsList *p) {}
void InterpretationVisitor::visitFieldDeclaration(FieldDeclaration *p) {}
void InterpretationVisitor::visitFieldDefinition(FieldDefinition *p) {}
void InterpretationVisitor::visitFieldDefinitionAsc(FieldDefinitionAsc *p) {}
void InterpretationVisitor::visitStaticsEmpty(StaticsEmpty *p) {}
void InterpretationVisitor::visitStaticsBody(StaticsBody *p) {}
void InterpretationVisitor::visitClassBody(ClassBody *p) {}
void InterpretationVisitor::visitStatementVarDef(StatementVarDef *p) {}
void InterpretationVisitor::visitStatementVarDefAsc(StatementVarDefAsc *p) {}
void InterpretationVisitor::visitStatementIf(StatementIf *p) {}
void InterpretationVisitor::visitStatementWhile(StatementWhile *p) {}
void InterpretationVisitor::visitStatementFor(StatementFor *p) {}
void InterpretationVisitor::visitStatementReturnNone(StatementReturnNone *p) {}
void InterpretationVisitor::visitStatementReturnValue(StatementReturnValue *p) {}
void InterpretationVisitor::visitStatementFunctionCall(StatementFunctionCall *p) {}
void InterpretationVisitor::visitIfStatement(IfStatement *p) {}
void InterpretationVisitor::visitIfElseIfStatement(IfElseIfStatement *p) {}
void InterpretationVisitor::visitIfElseStatement(IfElseStatement *p) {}
void InterpretationVisitor::visitBody(Body *p) {}
void InterpretationVisitor::visitMethodReference(MethodReference *p) {}
void InterpretationVisitor::visitRelationalEquals(RelationalEquals *p) {}
void InterpretationVisitor::visitRelationalNotEquals(RelationalNotEquals *p) {}
void InterpretationVisitor::visitRelationalLess(RelationalLess *p) {}
void InterpretationVisitor::visitRelationalGreater(RelationalGreater *p) {}
void InterpretationVisitor::visitRelationalLessOrEqual(RelationalLessOrEqual *p) {}
void InterpretationVisitor::visitRelationalGreaterOrEqual(RelationalGreaterOrEqual *p) {}
void InterpretationVisitor::visitArithmeticDifference(ArithmeticDifference *p) {}
void InterpretationVisitor::visitArithmeticProduct(ArithmeticProduct *p) {}
void InterpretationVisitor::visitArithmeticQuotient(ArithmeticQuotient *p) {}
void InterpretationVisitor::visitArithmeticModulus(ArithmeticModulus *p) {}
void InterpretationVisitor::visitArithmeticExponentiation(ArithmeticExponentiation *p) {}
void InterpretationVisitor::visitLogicalUnaryNot(LogicalUnaryNot *p) {}
void InterpretationVisitor::visitLogicalConjunction(LogicalConjunction *p) {}
void InterpretationVisitor::visitLogicalDisjunction(LogicalDisjunction *p) {}
void InterpretationVisitor::visitLogicalExclusiveDisjunction(LogicalExclusiveDisjunction *p) {}
void InterpretationVisitor::visitLogicalImplication(LogicalImplication *p) {}
void InterpretationVisitor::visitLogicalEquivalence(LogicalEquivalence *p) {}
void InterpretationVisitor::visitUnaryHashCode(UnaryHashCode *p) {}
void InterpretationVisitor::visitUnaryMinus(UnaryMinus *p) {}
void InterpretationVisitor::visitTrueTerm(TrueTerm *p) {}
void InterpretationVisitor::visitFalseTerm(FalseTerm *p) {}
void InterpretationVisitor::visitEmptyTerm(EmptyTerm *p) {}
void InterpretationVisitor::visitStringTerm(StringTerm *p) {}
void InterpretationVisitor::visitArrayReferenceTerm(ArrayReferenceTerm *p) {}
void InterpretationVisitor::visitFieldReferenceTerm(FieldReferenceTerm *p) {}
void InterpretationVisitor::visitFunctionCallExpr(FunctionCallExpr *p) {}
void InterpretationVisitor::visitFunctionCall(FunctionCall *p) {}
void InterpretationVisitor::visitArrayInitializer(ArrayInitializer *p) {}
void InterpretationVisitor::visitRangeExpressionTerm(RangeExpressionTerm *p) {}
void InterpretationVisitor::visitRangeExpression(RangeExpression *p) {}
void InterpretationVisitor::visitSteppedRangeExpression(SteppedRangeExpression *p) {}
void InterpretationVisitor::visitOpenRange(OpenRange *p) {}
void InterpretationVisitor::visitClosedRange(ClosedRange *p) {}
void InterpretationVisitor::visitLeftClosedRightOpenedRange(LeftClosedRightOpenedRange *p) {}
void InterpretationVisitor::visitLeftOpenedRightClosedRange(LeftOpenedRightClosedRange *p) {}
void InterpretationVisitor::visitRangeBody(RangeBody *p) {}
void InterpretationVisitor::visitListDecl(ListDecl *p) {}
void InterpretationVisitor::visitListIdent(ListIdent *p) {}
void InterpretationVisitor::visitListFieldDef(ListFieldDef *p) {}
void InterpretationVisitor::visitListTypeReference(ListTypeReference *p) {}
void InterpretationVisitor::visitListFuncParam(ListFuncParam *p) {}
void InterpretationVisitor::visitListStatement(ListStatement *p) {}
void InterpretationVisitor::visitListExpression(ListExpression *p) {}
void InterpretationVisitor::visitInteger(Integer x) {}
void InterpretationVisitor::visitChar(Char x) {}
void InterpretationVisitor::visitDouble(Double x) {}
void InterpretationVisitor::visitString(String x) {}
void InterpretationVisitor::visitIdent(Ident x) {}