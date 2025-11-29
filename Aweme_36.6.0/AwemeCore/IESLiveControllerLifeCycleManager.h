@class NSString, NSArray, NSTimer, IESLiveControllerChangeEvent, IESLiveControllerVisibleModel;

@interface IESLiveControllerLifeCycleManager : NSObject <IESLiveControllerFullScreenTestService, IESLiveCaptureAction, IESLiveControllerVisibleService, IESLivePopupControllerStateChangeService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) IESLiveControllerVisibleModel *livePageModel;
@property (copy) IESLiveControllerVisibleModel *previousLivePageModel;
@property (copy) NSArray *pages;
@property (copy) NSArray *previousPages;
@property (retain) IESLiveControllerChangeEvent *lastChangeEvent;
@property (retain) IESLiveControllerVisibleModel *delayPushPage;
@property (retain) NSTimer *timer;
@property BOOL previousVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstace;

- (void)viewDidAppearController:(id)a0;
- (void)viewDidDisappearController:(id)a0;
- (id)pageDescription:(id)a0;
- (id)liveController;
- (id)liveDescription;
- (void)triggerPrivacyCheck:(long long)a0 delay:(long long)a1 biz:(id)a2 scene:(id)a3 params:(id)a4 completionBlock:(id /* block */)a5;
- (void)cancelTaskWithBiz:(id)a0 scene:(id)a1;
- (BOOL)liveControllerVisiable;
- (id)pagesDescription;
- (void)testFullScreenWithPresentViewController:(id)a0 completion:(id /* block */)a1;
- (void)testFullScreenWithPushViewController:(id)a0 completion:(id /* block */)a1;
- (void)testFullScreenWithAddChildViewController:(id)a0 completion:(id /* block */)a1;
- (void)dealWithLiveViewControllerStackChangedWithStart:(id)a0;
- (void)dealWithLiveControllerVisiableChanged:(BOOL)a0 topController:(id)a1 start:(id)a2;
- (void)_viewDidAppearController:(id)a0;
- (BOOL)isLiveControllerInClosureStates;
- (void)cleanPagesIfNeeded;
- (void)addDelayPageIfNeededWhenVCAppear:(BOOL)a0 controller:(id)a1;
- (BOOL)popPagesForController:(id)a0 popPages:(id *)a1;
- (id)constructVisibleModelWithController:(id)a0;
- (void)recordDelayAddPage:(id)a0;
- (BOOL)isPageInLive:(id)a0;
- (void)popInvalidPages:(id *)a0;
- (void)calculatePageVisibilityV2:(id)a0;
- (void)calculatePageVisibility:(id)a0;
- (void)dealWithPageSettingsList:(id)a0;
- (BOOL)checkForOcclusionInLayer:(id)a0 inheritedClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inCoordinateLayer:(id)a2 screenArea:(double)a3 threshold:(double)a4 stop:(BOOL *)a5 calcCount:(long long *)a6;
- (void)trackWithInfo:(id)a0 useMonitor:(BOOL)a1;
- (BOOL)isLayerOcclude:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maxColorView:(id)a0 calculateCount:(long long *)a1 maxCount:(long long)a2;
- (BOOL)isControllerLeak:(id)a0;
- (void)popupControllerStateChange:(long long)a0 scene:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)addPage:(id)a0;
- (id)isAnchor;

@end
