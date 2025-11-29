@class CALayer, NSDictionary, UILabel, UIView, BDImageView;

@interface BDASplashBannerView : UIView

@property (copy, nonatomic) NSDictionary *clickArea;
@property (copy, nonatomic) NSDictionary *extraSize;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UILabel *subTipsLabel;
@property (retain, nonatomic) UIView *tipsLabelContainer;
@property (nonatomic) unsigned long long styleEdition;
@property (nonatomic) float labelLeftEdgeDistance;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) CALayer *borderLayer;

- (id)initWithParam:(id)a0;
- (void)addCustomView;
- (BOOL)checkPointIsValid:(struct CGPoint { double x0; double x1; })a0;
- (void)updateSubviewLayout;
- (void)setupBorderLayer;
- (void)setupBannerView;
- (void)setTipsText:(id)a0 subText:(id)a1;
- (void)setTipsText:(id)a0 withFontSize:(double)a1;
- (id)initWithStyleEdition:(long long)a0;
- (void)deleteTextShadow;
- (void)setWidth:(double)a0;
- (void).cxx_destruct;
- (void)updateConfig;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
