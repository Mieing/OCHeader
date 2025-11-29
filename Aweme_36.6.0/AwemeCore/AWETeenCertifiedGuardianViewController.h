@class NSString, LOTAnimationView, UILabel, UIView, UIButton;

@interface AWETeenCertifiedGuardianViewController : UIViewController <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) LOTAnimationView *iconAniView;
@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) UILabel *subTitleView;
@property (retain, nonatomic) UIButton *certGuardButton;
@property (retain, nonatomic) UIButton *forceButton;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *blurView;
@property (nonatomic) BOOL isPlayedAni;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)custom_blurView;
- (void)p_enterCertPage;
- (void)p_enterAppealPage;
- (void)p_setupUI;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)init;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
