@interface IESGCPDetailRankImageTransformer : BDBaseTransformer

@property (nonatomic) long long resizingMode;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } capInsets;

- (id)transformImageAfterStoreWithImage:(id)a0;
- (id)initWithCapInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 resizingMode:(long long)a1;

@end
