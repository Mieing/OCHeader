@class NSString;
@protocol RTVXREngine, RxInjector, RTVXRControllerInjector;

@interface RTVXRBaseBusinessHandler : NSObject <RTVXREngineDelegate>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXREngine> XREngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)__addNotification;
- (void)renderXREngine:(id)a0;
- (void)xrEngine:(id)a0 didRenderFirstLocalVideoFrame:(struct CGSize { double x0; double x1; })a1;
- (void)xrEngine:(id)a0 didJoinRoom:(id)a1 withUid:(id)a2;
- (void)xrEngine:(id)a0 newSessionCreatedLocal:(BOOL)a1 withUid:(id)a2;
- (void)xrEngine:(id)a0 didLeaveRoom:(id)a1;
- (void)xrEngine:(id)a0 didUserOffline:(id)a1 reason:(unsigned long long)a2;
- (void)xrEngine:(id)a0 didReceiveFirstRemoteAudioFrameOfUid:(id)a1;
- (void)xrEngine:(id)a0 didReceiveFirstRemoteVideoFrameOfUid:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)xrEngine:(id)a0 didReceiveSpeakerAudioVolumUpdates:(id)a1 totalVolume:(unsigned long long)a2;
- (void)xrEngine:(id)a0 didOccurError:(id)a1;
- (void)xrEngine:(id)a0 networkQualityDidChange:(id)a1;
- (void)xrEngine:(id)a0 reportToTTMonitorData:(id)a1 logTypeStr:(id)a2;
- (id)xrEngineConfig;
- (id)controllerModule;
- (id)shutdownBecauseOf:(unsigned long long)a0;
- (id)preProcessBusiness;
- (void)didAppearView;
- (id)preloadPreviewIfNeedOnView:(id)a0;
- (id)liveCoreConfig;
- (void)preloadCDNResources;
- (void)xrEngine:(id)a0 reportLogLeave:(int)a1 filename:(id)a2 tag:(id)a3 line:(int)a4 funcName:(id)a5 format:(id)a6;
- (void)didBecomeActive;
- (void)willEnterForeground;
- (void)willResignActive;
- (void).cxx_destruct;
- (void)didEnterBackground;

@end
