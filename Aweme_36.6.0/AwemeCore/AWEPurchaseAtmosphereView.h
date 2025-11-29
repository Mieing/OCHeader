@class CAGradientLayer, AWEPurchaseAtmosphereViewModel, UILabel, UIView, BDImageView;

@interface AWEPurchaseAtmosphereView : UIView

@property (retain, nonatomic) BDImageView *atmosphereHeadImage;
@property (retain, nonatomic) UILabel *saleNumLabel;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAGradientLayer *borderLayer;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) AWEPurchaseAtmosphereViewModel *viewModel;
@property (nonatomic) long long currentNum;
@property (nonatomic) long long updateToNum;
@property (nonatomic) long long changeNum;
@property (nonatomic) double maxWidth;
@property (nonatomic) double tailMargin;
@property (nonatomic) struct CGSize { double width; double height; } initialSize;
@property (nonatomic) double prefixFontSize;
@property (nonatomic) double saleNumFontSize;
@property (nonatomic) double bgCornerRadius;

- (void)resetToShouldState;
- (void)updateWithAtmosphereViewModel:(id)a0;
- (void)resetAtmosphereHeadImageConstraintWithMultiNum:(double)a0;
- (id)attributedSaleStringWithViewModel:(id)a0;
- (id)validFontWithFont:(id)a0;
- (id)saleNumFont;
- (void)updateWithAtmosphereViewModel:(id)a0 isAnimation:(BOOL)a1;
- (long long)calculateNextShowNum;
- (void)updateSaleNumDirectlyWithViewModel:(id)a0;
- (void)updateGradientLayerFrame;
- (void)applyRadius:(double)a0 atCorners:(unsigned long long)a1 forView:(id)a2;
- (void)resetGradientLayerColors:(id)a0 andBorderColors:(id)a1;
- (void)showDirectlyWithStillState;
- (void)preloadImageWithURLStr:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;
- (id)prefixFont;

@end
