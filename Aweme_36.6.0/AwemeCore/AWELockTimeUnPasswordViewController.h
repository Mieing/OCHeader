@class NSDate, NSAttributedString, LOTAnimationView, NSString, UILabel, UIView, NSObject;
@protocol OS_dispatch_source;

@interface AWELockTimeUnPasswordViewController : UIViewController <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) LOTAnimationView *iconAniView;
@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) UILabel *subTitleView;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) UIView *blurView;
@property (nonatomic) BOOL isTimerRunning;
@property (nonatomic) BOOL isPlayedAni;
@property (retain, nonatomic) NSAttributedString *timeAppendString;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)custom_blurView;
- (void)applicationBecomeActive;
- (void)p_setupTimer;
- (void)p_setupStartDate;
- (void)p_refreshTimer;
- (void)p_resetDate;
- (void)p_cancelTimer;
- (BOOL)p_isAntiAddictionTime;
- (void)p_setupStartDateAB;
- (void)p_setupUI;
- (void)dismiss;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (id)init;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
