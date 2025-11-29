@class MMLiteAppViewController, UIViewController, NSString;

@interface WCFinderJumpInfoLiteAppPluginSchedulerHandler : NSObject <MMLiteAppExt, MMLiteAppHalfScreenStatusChangeListener>

@property (nonatomic) int businessType;
@property (nonatomic) BOOL hasCallWillAppear;
@property (nonatomic) BOOL hasAppear;
@property (nonatomic) BOOL isHalf;
@property (weak, nonatomic) UIViewController *fromVC;
@property (weak, nonatomic) MMLiteAppViewController *toLiteAppVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onLiteAppLifeCycleEvent:(unsigned long long)a0 appId:(id)a1 appUuid:(unsigned int)a2 extraData:(id)a3;
- (void)fixMissingLifecycleMethod;
- (id)navigationController;
- (id)displayContainerVC;
- (id)_backgroundFromVC;
- (BOOL)_isPushingOrPresenting;
- (void)_onViewWillDisappear;
- (void)_onViewDidDisappear;
- (void)_onViewWillAppear;
- (void)_onViewDidAppear;
- (void)_viewWillBePushOrPresent;
- (void)_viewDidBePushOrPresent;
- (void)_viewWillBePopOrDismiss;
- (void)_viewDidBePopOrDismiss;
- (void)_viewWillPushOrPresent;
- (void)_viewDidPushOrPresent;
- (void)_viewWillPop;
- (void)_viewDidPop;
- (void)onFullScreenAnimEnd;
- (void)onResumeAnimEnd;
- (void).cxx_destruct;

@end
