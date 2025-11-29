@class UIImageView, UILabel;

@interface CJPayAccountInsuranceTipView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL isDarkThemeOnly;
@property (nonatomic) BOOL showEnable;

+ (id)keyboardLogo;
+ (id)newKeyboardLogo;
+ (id)newDarkKeyboardLogo;
+ (BOOL)shouldShow;

- (void)darkThemeOnly;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;

@end
