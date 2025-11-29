@class UILabel, MMFinderLiveShopShelfHintInfo, MMWebImageView;

@interface MMFinderLiveShopShelfTipsView : MMRectTriangleArrowView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) MMFinderLiveShopShelfHintInfo *info;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orientation:(long long)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })imageSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)triangeArrowHeight;
- (double)triangeArrowWidth;
- (double)selfCornerRadius;
- (void).cxx_destruct;

@end
