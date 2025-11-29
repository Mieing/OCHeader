@class IESECShopProductsSLITemplate, UIView;

@interface IESECShopProductsSLICell : UICollectionViewCell {
    BOOL _needsAppearanceAnimation;
}

@property (retain, nonatomic) UIView *sliceXContentView;
@property (retain, nonatomic) IESECShopProductsSLITemplate *sliceTemplate;

- (void)setNeedsAppearanceAnimation;
- (void)performAppearanceAnimationIfNeeded;
- (void)injectSliceXContentView:(id)a0 withTemplate:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
