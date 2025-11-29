@interface IESECGoodsDetailHeaderGaussBlurBGView : IESECGoodsDetailHeaderBGView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastCellFrame;

- (void)layoutWithHeaderCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (id)init;
- (void)layoutSubviews;

@end
