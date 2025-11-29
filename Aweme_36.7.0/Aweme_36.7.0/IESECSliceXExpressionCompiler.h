@class IESECSliceXExprCoreRunner;

@interface IESECSliceXExpressionCompiler : NSObject

@property (retain, nonatomic) IESECSliceXExprCoreRunner *exprRunner;

+ (void)initialize;
+ (id)shared;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)init_private;
- (id)executeExpr:(id)a0 env:(id)a1 error:(id *)a2;
- (BOOL)precompileWithExpr:(id)a0;
- (id)mergeEnvData:(id)a0 withGlobalEnv:(id)a1;
- (void).cxx_destruct;

@end
