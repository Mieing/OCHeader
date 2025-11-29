@class UIImageView, UILabel;

@interface ACCVoiceEffectFavoriteButton : UIButton

@property (retain, nonatomic) UIImageView *starImgView;
@property (retain, nonatomic) UILabel *favoriteLabel;

- (void)updateFavoriteStatus:(BOOL)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityValue;
- (void)setupViews;

@end
