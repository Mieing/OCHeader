@class CAGradientLayer, MMLiveColorfulLabel, UIImageView, MMFinderLiveFansGroupIntroViewConfig;

@interface MMFinderLiveFansGroupIntroView : UIView

@property (retain, nonatomic) MMFinderLiveFansGroupIntroViewConfig *config;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *wecoinImageView;
@property (retain, nonatomic) UIImageView *bgFanGroupImageView;
@property (retain, nonatomic) MMLiveColorfulLabel *titleLabel;
@property (retain, nonatomic) MMLiveColorfulLabel *priceDescLabel;
@property (retain, nonatomic) MMLiveColorfulLabel *rightDetailLabel;
@property (retain, nonatomic) CAGradientLayer *bgGradientLayer;
@property (retain, nonatomic) CAGradientLayer *borderGradientLayer;
@property (nonatomic) BOOL highlighted;

- (id)initWithConfig:(id)a0;
- (void)resizeToFitWidth;
- (void)initUI;
- (id)buildColorfulLabel;
- (void)updateColorfulLabelColor:(id)a0;
- (void)reloadUI;
- (void)createGradientLayers;
- (void)clearGradientLayers;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })getIconImageSize;
- (id)getIconImage;
- (id)getWecoinImage;
- (id)getFanBGImage;
- (void).cxx_destruct;

@end
