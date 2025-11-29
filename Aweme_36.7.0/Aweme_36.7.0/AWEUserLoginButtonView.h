@class AWEUserLoginButtonModel, DYLoginNextActionButton, NSTimer, UIView, UILabel;

@interface AWEUserLoginButtonView : UIView

@property (retain, nonatomic) AWEUserLoginButtonModel *model;
@property (retain, nonatomic) DYLoginNextActionButton *actionButton;
@property (retain, nonatomic) UIView *tagBackgroundView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (nonatomic) BOOL breathAnimating;
@property (retain, nonatomic) NSTimer *breathTimer;
@property (copy, nonatomic) id /* block */ clickAction;
@property (copy, nonatomic) id /* block */ breathBlock;

- (void)buttonClicked;
- (void)loadLottie;
- (void)stopLoadingWithError:(id)a0;
- (void)buttonStatusChanged:(long long)a0;
- (void)startLoginButtonBreathAnimation;
- (void)initBreathTimerIfNeed;
- (void)setupActionButton:(id)a0;
- (void)layoutGeneralView;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithTitle:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;

@end
