@class DUXNavigationBar, UIView, AWEGradientView, YYLabel;

@interface AWEHotSearchCommentNavigationBar : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DUXNavigationBar *navBar;
@property (retain, nonatomic) YYLabel *discussLabel;
@property (retain, nonatomic) YYLabel *mainTitleLabel;
@property (retain, nonatomic) YYLabel *subTitleLabel;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (nonatomic) BOOL isGray;

- (void)awe_themeDidChange:(long long)a0;
- (void)addLeftAction:(id)a0;
- (void)configWithContext:(id)a0;
- (void)makeConstraint;
- (void)p_resetGradientColor;
- (void)updateDarkTheme;
- (void).cxx_destruct;
- (id)init;
- (void)setAlpha:(double)a0;
- (void)setupUI;
- (void)updateWithContext:(id)a0;

@end
