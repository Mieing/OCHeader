@class IESLLTempoExprCoreOperator;

@interface IESLLTempoExprCoreOperatorNode : IESLLTempoExprCoreBaseNode

@property (readonly, nonatomic) unsigned long long shortCircuitType;
@property (readonly, nonatomic) IESLLTempoExprCoreOperator *operator;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)type;
- (id)initWithOperator:(id)a0;

@end
