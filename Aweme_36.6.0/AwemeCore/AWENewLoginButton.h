@class UIImage;

@interface AWENewLoginButton : UIButton

@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL showHighlightAnimation;
@property (nonatomic) BOOL showTitleDisableAlphaChange;
@property (nonatomic) BOOL enableHighlightAlphaChange;
@property (nonatomic) BOOL awe_enabled;
@property (retain, nonatomic) UIImage *defaultImage;
@property (retain, nonatomic) UIImage *enableImage;
@property (retain, nonatomic) UIImage *loadingImage;

- (void)setAlpha:(double)a0 withAnimateCompletion:(id /* block */)a1;
- (void)setImageWithDefaultImage;
- (id)_spinAnimation;
- (double)alphaForCurrentState;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;
- (void)setEnabled:(BOOL)a0;

@end
