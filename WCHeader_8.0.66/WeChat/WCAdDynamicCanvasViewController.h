@class WCStatTimerHelper, WCAdDynamicCanvasPageInfo, NSString, WCCanvasDynamicDataLoader;
@protocol WCAdDynamicCanvasViewControllerDelegate;

@interface WCAdDynamicCanvasViewController : MMLiteAppViewController <WCCanvasDynamicDataLoaderDelegate, IAdDynamicCanvasExt, UIViewControllerAnimatedTransitioning, CAAnimationDelegate>

@property (retain, nonatomic) WCCanvasDynamicDataLoader *dynamicLoader;
@property (retain, nonatomic) WCStatTimerHelper *exposureTimeHelper;
@property (nonatomic) unsigned long long totalExposureTime;
@property (weak, nonatomic) id<WCAdDynamicCanvasViewControllerDelegate> delegate;
@property (retain, nonatomic) WCAdDynamicCanvasPageInfo *pageInfo;
@property (nonatomic) BOOL halfScreenReachedTopFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)jumpToH5InHalfScreen:(id)a0 extraInfo:(id)a1;
- (void)jumpToWeAppInHalfScreen:(id)a0 sceneNote:(id)a1;
- (void)jumpToCanvasInHalfScreen:(id)a0 uxInfo:(id)a1 canvasDynamicInfo:(id)a2 noStore:(BOOL)a3;
- (void)dealloc;
- (void)tryToUpdateUxInfo;
- (void)tryToUpdateCanvasAuth;
- (BOOL)checkNeedUpdateUxInfo:(long long)a0;
- (BOOL)isCanvasInHalfScreenMode;
- (void)halfScreenExpandToTop;
- (void)notifyTimelineComment;
- (void)notifyDidBePoped;
- (void)onUpdateSharedUxinfo:(id)a0;
- (void)onUpdateCanvasStateResult:(BOOL)a0 cleanLocalCache:(unsigned int)a1;
- (void)publishEventToPage:(id)a0 event:(id)a1 params:(id)a2;
- (void)publishEvent:(id)a0 params:(id)a1;
- (void)onKeyboardWillShow:(id)a0;
- (void)onKeyboardDidShow:(id)a0;
- (void)onKeyboardWillHide:(id)a0;
- (void)onKeyboardDidHide:(id)a0;
- (void)onKeyboardWillChangeFrame:(id)a0;
- (void)onKeyboardDidChangeFrame:(id)a0;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (BOOL)shouldUseCustomAnimation;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end
