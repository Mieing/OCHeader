@class NSString;
@protocol RTVUserProfileManagerInterface, RTVPipelineInterface, RTVXREngine, RTVVoipSettingManagerInterface, RTVUserSettingInterface;

@interface RTVRTCEngineComponent : RTVComponentBase <RTVRTCEngineInterface, RTVPipelineHandler, RTVXREngineDelegate>

@property (retain, nonatomic) id<RTVXREngine> engine;
@property (weak, nonatomic) id<RTVPipelineInterface> pipeline;
@property (nonatomic) BOOL xrEngineConfigured;
@property (retain, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (retain, nonatomic) id<RTVVoipSettingManagerInterface> settingManager;
@property (readonly, nonatomic) id<RTVUserSettingInterface> userSetting;
@property (nonatomic) BOOL hasReported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleEvent:(id)a0 completion:(id /* block */)a1;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)rtcEngine;
- (void)xrEngine:(id)a0 videoCaptureStateChange:(unsigned long long)a1;
- (void)xrEngine:(id)a0 didRenderAndDisplayFirstLocalVideoFrame:(struct CGSize { double x0; double x1; })a1;
- (void)xrEngine:(id)a0 didRenderFirstLocalVideoFrame:(struct CGSize { double x0; double x1; })a1;
- (BOOL)isEngineCreated;
- (void)addXREngineDelegate:(id)a0;
- (void)addXREngineDelegate:(id)a0 withDelegateQueue:(id)a1;
- (void)removeXREngineDelegate:(id)a0;
- (id)registedEventIdentities;
- (id)p_createEngine;
- (void)__setupXREngineIfNeeded;
- (void)__setupXREngineForCallerPrepare;
- (id)__interactConfigureationForEvent:(long long)a0 preload:(BOOL)a1;
- (void)__preloadEngine;
- (void).cxx_destruct;

@end
