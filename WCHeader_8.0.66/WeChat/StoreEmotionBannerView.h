@class ColorGradientView, EmotionBannerSet, MMWebImageView, UIView, MMUILabel;

@interface StoreEmotionBannerView : UIView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *markLabel;
@property (retain, nonatomic) UIView *markBgView;
@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (retain, nonatomic) ColorGradientView *gradientView;
@property (retain, nonatomic) EmotionBannerSet *banner;

+ (struct CGSize { double x0; double x1; })size;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)createOrUpdateLayout;
- (id)getDynamicColorFrom:(id)a0;
- (void).cxx_destruct;

@end
