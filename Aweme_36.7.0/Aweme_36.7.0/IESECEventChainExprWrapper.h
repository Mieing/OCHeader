@class IESECSliceXExprCoreRunner;

@interface IESECEventChainExprWrapper : NSObject

@property (retain, nonatomic) IESECSliceXExprCoreRunner *exprRunner;

- (id)executeExpr:(id)a0 env:(id)a1 error:(id *)a2;
- (BOOL)validateExprResultBooleanType:(id)a0 expression:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;

@end
