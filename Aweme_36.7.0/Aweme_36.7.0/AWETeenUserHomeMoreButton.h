@class UIImageView;

@interface AWETeenUserHomeMoreButton : UIButton

@property (retain, nonatomic) UIImageView *darkImgView;

+ (id)redPointColor;

- (void)awe_themeReload;
- (void)updateAlpha:(double)a0;
- (void)updateImage:(id)a0;
- (BOOL)isLightMode;
- (void).cxx_destruct;
- (void)_commonInit;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
