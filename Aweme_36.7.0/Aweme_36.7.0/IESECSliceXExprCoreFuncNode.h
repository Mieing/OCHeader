@class IESECSliceXExprCoreFunc;

@interface IESECSliceXExprCoreFuncNode : IESECSliceXExprCoreBaseNode

@property (readonly, nonatomic) BOOL isOptionFunc;
@property (readonly, nonatomic) IESECSliceXExprCoreFunc *func;

- (id)initWithFunc:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)type;

@end
