@class UITapGestureRecognizer, UIView, AWEGradientView, AWENearbyPOIinfoTilingView;

@interface AWENearbyPOIInfoCardViewStyle1 : AWENearbyPOIInfoCardView

@property (retain, nonatomic) AWENearbyPOIinfoTilingView *headImages;
@property (retain, nonatomic) AWEGradientView *spuBgGradientView;
@property (retain, nonatomic) UIView *cardShadowView;
@property (retain, nonatomic) UIView *headImgShadowView;
@property (retain, nonatomic) UITapGestureRecognizer *headImgGesture;
@property (retain, nonatomic) UITapGestureRecognizer *ImgCountGesture;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastBounds;

- (void)configViews;
- (void)configViewWithModel:(id)a0;
- (void)startCardViewAnimation;
- (void)addSpuBgGradientViewWithModel:(id)a0;
- (id)getHeaderImagesWithCardModel:(id)a0;
- (void)addShadowColorWithModel:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)updateUI;

@end
