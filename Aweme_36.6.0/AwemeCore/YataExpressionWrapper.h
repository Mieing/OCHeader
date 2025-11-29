@class IESECSliceXExprCoreRunner;

@interface YataExpressionWrapper : YataModule

@property (retain, nonatomic) IESECSliceXExprCoreRunner *exprRunner;

+ (BOOL)validateExprResultBooleanType:(id)a0 expression:(id)a1 error:(id *)a2;

- (id)initWithYataInstance:(id)a0;
- (id)executeExpr:(id)a0 env:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
