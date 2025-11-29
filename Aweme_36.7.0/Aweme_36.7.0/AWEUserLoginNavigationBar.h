@class UIButton, AWEUserLoginNavigationBarUIConfig, AWEUserLoginNavigationBarContext;
@protocol AWEUserLoginNavigationBarDelegate;

@interface AWEUserLoginNavigationBar : UIView

@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (readonly, nonatomic) AWEUserLoginNavigationBarContext *context;
@property (readonly, nonatomic) AWEUserLoginNavigationBarUIConfig *uiConfig;
@property (weak, nonatomic) id<AWEUserLoginNavigationBarDelegate> delegate;

- (void)skipAction;
- (void)rightButtonAction:(id)a0;
- (void)updateUIConfig:(id)a0;
- (void)helpAction;
- (id)imageConvergenceMiddleScaleWithName:(id)a0;
- (void)setupLeftButton;
- (void)setupRightButton;
- (void)leftButtonAction:(id)a0;
- (void)updateIsAmbientHeadViewShown:(BOOL)a0;
- (void)backAction;
- (void).cxx_destruct;
- (void)closeAction;
- (id)initWithContext:(id)a0;
- (void)setupUI;
- (void)layoutUI;

@end
