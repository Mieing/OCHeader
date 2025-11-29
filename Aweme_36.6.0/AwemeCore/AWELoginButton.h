@class UIImage, NSString;

@interface AWELoginButton : UIButton <AWELoginButtonProtocol>

@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL buttonClickableWhenDisable;
@property (nonatomic) BOOL showHighlightAnimation;
@property (nonatomic) BOOL showDisableAlphaChange;
@property (nonatomic) BOOL onlyShowAlphaChangeOnTitleLabel;
@property (nonatomic) BOOL awe_enabled;
@property (retain, nonatomic) UIImage *defaultImage;
@property (retain, nonatomic) UIImage *loadingImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)strokeIconTitleButtonWithIconName:(id)a0 text:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (id)strokeIconTitleButtonWithIconImage:(id)a0 text:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (id)strokeIconTitleButtonWithText:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

- (void)setImageWithDefaultImage;
- (id)_spinAnimation;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (void)commonInit;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;
- (void)setEnabled:(BOOL)a0;
- (void)show;

@end
