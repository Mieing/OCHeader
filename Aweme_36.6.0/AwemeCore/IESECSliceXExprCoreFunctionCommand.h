@class IESECSliceXExprCoreFunc;

@interface IESECSliceXExprCoreFunctionCommand : IESECSliceXExprCoreCommand

@property (readonly, nonatomic) IESECSliceXExprCoreFunc *func;
@property (readonly, nonatomic) unsigned long long argsCount;

- (long long)execute:(id)a0 withEnv:(id)a1 error:(id *)a2;
- (id)initWithFunc:(id)a0 argsCount:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)description;

@end
