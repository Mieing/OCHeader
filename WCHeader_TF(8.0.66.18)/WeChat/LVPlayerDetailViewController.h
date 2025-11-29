@class LVMinimizeContext, NSString, MegaVideoPlayerDetailOpenParam, UIView;

@interface LVPlayerDetailViewController : LVFlutterViewController

@property (retain, nonatomic) MegaVideoPlayerDetailOpenParam *openParam;
@property (retain, nonatomic) LVMinimizeContext *minimizeContext;
@property (nonatomic) BOOL pendingMinimize;
@property (copy, nonatomic) NSString *updatedSessionId;
@property (nonatomic) BOOL allowRotate;
@property (retain, nonatomic) UIView *pushAnimationSnapshot;
@property (retain, nonatomic) UIView *pushAnimationCardSnapshot;
@property (retain, nonatomic) UIView *pushAnimationChannelListSnapshot;
@property (copy, nonatomic) NSString *starId;

+ (id)routeName;
+ (id)extraPlugins;
+ (id)createWithParam:(id)a0 openParam:(id)a1 player:(id)a2;

- (BOOL)enterFromMinimize;
- (void)minimizeWithPlayerId:(id)a0;
- (void)prepareMinimize:(id)a0;
- (BOOL)shouldInteractiveDismiss;
- (BOOL)useTransparentNavibar;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)forceLandscape;
- (BOOL)shouldShowQuickReplyPush:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidPushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)viewDidTransitionToNewSize;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (id)currentMinimizationTaskBizKey;
- (id)currentMinimizationTaskBizName;
- (void).cxx_destruct;

@end
