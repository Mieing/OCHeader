@interface IESECSliceXExprCoreConstNode : IESECSliceXExprCoreBaseNode

@property (readonly, nonatomic) id constValue;
@property (nonatomic) BOOL sharedSpecialConstNode;

- (id)initWithConstValue:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)type;

@end
