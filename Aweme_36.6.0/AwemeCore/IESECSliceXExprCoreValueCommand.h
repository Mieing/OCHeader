@interface IESECSliceXExprCoreValueCommand : IESECSliceXExprCoreCommand

@property (readonly, nonatomic) id value;

- (long long)execute:(id)a0 withEnv:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)description;
- (id)initWithValue:(id)a0;

@end
