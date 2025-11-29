@class NSString, CJPayAnnieXCJPayPopupEventManager;
@protocol BDXContainerLifecycleProtocol, BDXContainerProtocol;

@interface CJPayAnnieXCJPayLifeCycleImpl : NSObject <BDXContainerLifecycleProtocol>

@property (weak, nonatomic) id<BDXContainerProtocol> container;
@property (nonatomic) BOOL enablePopupEvent;
@property (copy, nonatomic) NSString *popupEventSessionId;
@property (retain, nonatomic) CJPayAnnieXCJPayPopupEventManager *popupEventManager;
@property (nonatomic) BOOL hasSendPopupAppearEvent;
@property (nonatomic) BOOL hasSendPopupFrameChangeEvent;
@property (weak, nonatomic) id<BDXContainerLifecycleProtocol> originalDelegate;
@property (nonatomic) BOOL disableSwipe;
@property (nonatomic) BOOL shouldKeepDisableSwipe;
@property (retain, nonatomic) id disableSwipeNotifyToken;
@property (nonatomic) long long swipeTimes;
@property (nonatomic) double initTime;
@property (nonatomic) double firstSwipeDuration;
@property (copy, nonatomic) NSString *loadStage;
@property (nonatomic) double schemaLoadStart;
@property (nonatomic) double containerCreateStart;
@property (nonatomic) double containerCreateEnd;
@property (nonatomic) double containerLoadStart;
@property (nonatomic) double containerLoadEnd;
@property (nonatomic) double containerLoadFailed;
@property (nonatomic) double containerDestroy;
@property (nonatomic) BOOL hasReportContainerLoadStage;
@property (nonatomic) BOOL shouldObtainContextAgain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createServiceWithURL:(id)a0;
+ (id)createServiceWithURL:(id)a0 originalDelegate:(id)a1;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerWillCreated:(id)a0 view:(id)a1;
- (void)containerWillClose:(id)a0;
- (void)containerWillDestory:(id)a0;
- (void)containerViewControllerViewDidLoad:(id)a0;
- (void)containerVCViewDidAppear:(id)a0;
- (void)containerWillStartLoading:(id)a0;
- (void)containerDidStartLoading:(id)a0;
- (void)containerUpFullScreen:(id)a0 halfScreenCloseButtonAlpha:(double)a1;
- (id)viewControllerOfContainer:(id)a0;
- (void)obtainPopupEventInfoWithContainer:(id)a0;
- (void)trackContainerLoadStageWithContainer:(id)a0;
- (void)trackSwipeEventWithContainer:(id)a0;
- (id)commonParamsWithContainer:(id)a0;
- (void)trackContainerLoadStageWithPerf:(id)a0 commonParams:(id)a1;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (void)forwardInvocation:(id)a0;

@end
