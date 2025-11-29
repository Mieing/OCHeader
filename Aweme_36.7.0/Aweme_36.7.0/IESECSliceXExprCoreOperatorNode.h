@class IESECSliceXExprCoreOperator;

@interface IESECSliceXExprCoreOperatorNode : IESECSliceXExprCoreBaseNode

@property (readonly, nonatomic) unsigned long long shortCircuitType;
@property (readonly, nonatomic) IESECSliceXExprCoreOperator *operator;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)type;
- (id)initWithOperator:(id)a0;

@end
