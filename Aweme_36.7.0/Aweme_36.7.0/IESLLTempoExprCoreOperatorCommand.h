@class IESLLTempoExprCoreOperator;

@interface IESLLTempoExprCoreOperatorCommand : IESLLTempoExprCoreCommand

@property (readonly, nonatomic) IESLLTempoExprCoreOperator *operator;

- (long long)execute:(id)a0 withEnv:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOperator:(id)a0;

@end
