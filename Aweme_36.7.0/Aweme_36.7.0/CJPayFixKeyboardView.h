@class CJPaySafeKeyboardStyleConfigModel, NSString, UIImageView, CJPaySafeKeyboard, CJPayStyleButton, UIView;

@interface CJPayFixKeyboardView : UIView

@property (retain, nonatomic) CJPaySafeKeyboard *safeKeyboard;
@property (retain, nonatomic) UIImageView *safeGuardImageView;
@property (retain, nonatomic) CJPaySafeKeyboardStyleConfigModel *model;
@property (copy, nonatomic) NSString *safeGuardIconUrl;
@property (nonatomic) long long viewStyle;
@property (retain, nonatomic) CJPayStyleButton *completeButton;
@property (retain, nonatomic) UIView *bottomSafeAreaView;
@property (nonatomic) BOOL notShowSafeguard;

- (void)p_buttonClicked:(id)a0;
- (id)initWithFrameForDenoise:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_setupUIForDenoise;
- (void)setupWithSafeguard;
- (void)p_configDarkMode;
- (void)layoutKeyboard;
- (void)layoutKeyboardForDenoise;
- (id)initWithSafeGuardIconUrl:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)snapshot;
- (void)layoutSubviews;

@end
