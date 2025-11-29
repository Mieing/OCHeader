@class UIButton, AWEUserLoginHalfPageNavigationBarContext;
@protocol AWEUserLoginHalfPageNavigationBarDelegate;

@interface AWEUserLoginHalfPageNavigationBar : UIView

@property (retain, nonatomic) UIButton *actionButton;
@property (readonly, nonatomic) AWEUserLoginHalfPageNavigationBarContext *context;
@property (weak, nonatomic) id<AWEUserLoginHalfPageNavigationBarDelegate> delegate;

- (void)setupCloseButton;
- (void)setupBackButton;
- (void)layoutActionButtonMobileUI;
- (id)imageConvergenceMiddleScaleWithName:(id)a0;
- (void)backAction;
- (void).cxx_destruct;
- (void)closeAction;
- (id)initWithContext:(id)a0;
- (void)setupUI;

@end
