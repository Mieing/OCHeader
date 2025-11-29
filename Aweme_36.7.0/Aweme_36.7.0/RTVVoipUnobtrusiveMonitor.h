@class RxPromise, NSString, RxDeferred, RTVVoipMonitor, RTVVoipSession;
@protocol RTVVoipPerformanceMonitor, RxInjector, RTVUserProfileManagerInterface;

@interface RTVVoipUnobtrusiveMonitor : NSObject <RTVVoipSessionObserver, RTVXREngineDelegate>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (weak, nonatomic) RTVVoipSession *session;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (readonly, nonatomic) id<RTVVoipPerformanceMonitor> performanceMonitor;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) RxDeferred *localFirstFrameRenderDefer;
@property (readonly, nonatomic) RxDeferred *remoteFirstFrameRenderDefer;
@property (readonly, nonatomic) RxDeferred *blankScreenDefer;
@property (readonly, nonatomic) RxPromise *blankScreenTrackPromise;
@property (nonatomic) BOOL localVideoRenderInAdvance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)rtvSession:(id)a0 statusDidChangeTo:(long long)a1 fromStatus:(long long)a2;
- (void)xrEngine:(id)a0 didRenderFirstLocalVideoFrame:(struct CGSize { double x0; double x1; })a1;
- (void)xrEngine:(id)a0 didReceiveFirstRemoteVideoFrameOfUid:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)xrEngine:(id)a0 didPublishSucceedOfStream:(id)a1;
- (void)__monitorEndBlankScreenIfNeededWithDidViewAppear:(BOOL)a0;
- (void)__monitorEndBlankScreenTrackIfNeededWithDidViewAppear:(BOOL)a0;
- (void)__monitorPinBlankScreenTrackIfNeededWith:(id)a0;
- (void)__monitorStartBlankScreenIfNeed;
- (void)__resolveBlankScreenDeferWithViewDidAppear:(BOOL)a0;
- (void)__resolveLocalFirstFrameRenderDefer;
- (void)__resolveRemoteFirstFrameRenderDefer;
- (void)voipViewControllerViewDidAppear;
- (void)__monitorEndBlankScreenWhenFinishIfNeeded;
- (void)__monitorEndBlankScreenTrackWhenFinishIfNeeded;
- (void).cxx_destruct;

@end
