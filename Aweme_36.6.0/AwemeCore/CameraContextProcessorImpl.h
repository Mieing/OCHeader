@class CameraKitByteBenchDataManager, NSString, ByteBenchStrategySubscribeOC, ByteBenchStrategyOC, NSObject;
@protocol CameraTracker, VERecorderPublicProtocol, _TtP9CameraKit21CameraContextProtocol_, OS_dispatch_queue;

@interface CameraContextProcessorImpl : NSObject <CKSCameraContextProcessor>

@property (weak, nonatomic) ByteBenchStrategyOC *strategy;
@property (weak, nonatomic) id<CameraTracker> tracker;
@property (copy, nonatomic) NSString *poolName;
@property (nonatomic) BOOL enableResoltionCoverge;
@property (weak, nonatomic) CameraKitByteBenchDataManager *dataManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *preloadQueue;
@property (retain, nonatomic) ByteBenchStrategySubscribeOC *strategySubscriber;
@property (weak, nonatomic) id<VERecorderPublicProtocol> currentCamera;
@property (weak, nonatomic) id<_TtP9CameraKit21CameraContextProtocol_> currentContext;
@property (nonatomic) BOOL inResetting;
@property (copy, nonatomic) id /* block */ willChangeResolutionBlock;
@property (copy, nonatomic) id /* block */ didChangeResolutionBlock;

- (void)track:(id)a0 params:(id)a1;
- (void)modifyDynamicCameraContext;
- (void)switchCameraStreamTo:(long long)a0;
- (void)registerCameraParamsToByteBench;
- (void)modifyTotalCameraContext;
- (void)degradeResolutionIfNeed;
- (void)fixResolutionAccordingFrameRatioIfNeed;
- (void)notifyResolutionChangeCausedByTabSwitch;
- (id)initWithByteBenchStrategy:(id)a0 featurePoolName:(id)a1 tracker:(id)a2 enableResoltionCoverge:(BOOL)a3;
- (void)invokeSetProperty:(id)a0 argument:(id)a1 target:(id)a2;
- (void)invokeSetProperty:(id)a0 argument:(id)a1 context:(id)a2;
- (struct CGSize { double x0; double x1; })obtainSizeAccordingCurrentRatioWithWidth:(double)a0;
- (void)willChangeResolutionWithPath:(id)a0;
- (id)obtainCapturePresetFromSizeWidth:(double)a0;
- (void)didChangeResolutionWithPath:(id)a0;
- (struct CGSize { double x0; double x1; })currentOutputSize;
- (void)resetCaptureRatio:(long long)a0 preferredPreset:(id)a1 outputSize:(struct CGSize { double x0; double x1; })a2 path:(id)a3 then:(id /* block */)a4;
- (id)dicFromJsonString:(id)a0;
- (struct CGSize { double x0; double x1; })obtainResolutionSizeFrom:(id)a0;
- (id)currentCapturePreset;
- (SEL)obtainSetterSelectorWithProperty:(id)a0;
- (struct CGSize { double x0; double x1; })transStringToSize:(id)a0;
- (void).cxx_destruct;

@end
