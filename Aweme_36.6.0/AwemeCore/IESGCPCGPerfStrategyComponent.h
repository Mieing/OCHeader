@class NSString, NSMutableDictionary;

@interface IESGCPCGPerfStrategyComponent : IESGCPCGInstanceBaseComponent <IESGCPCGInstanceActions, IESGCPCGLaunchProcessActions, IESGCPCGPerfStrategyRouter>

@property (retain, nonatomic) NSMutableDictionary *features;
@property (retain, nonatomic) NSMutableDictionary *frequencyControlDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)didSetGameCPDIContext;
- (void)playInstanceOnFirstFrameReceived:(id)a0 info:(id)a1;
- (void)playInstance:(id)a0 preloadResult:(BOOL)a1 info:(id)a2;
- (void)playInstance:(id)a0 didReceivePlayStats:(id)a1;
- (void)willStartInitProcess;
- (id)getStaticPerfStrategy;
- (id)getLatestFactor:(id)a0 defaultValue:(id)a1;
- (void)peakStatusChangeNotification:(id)a0;
- (void)_collectGameStaticFeatures;
- (void)_clearFeatures;
- (void)_formatFeatureData:(id)a0;
- (BOOL)_shouldApplyDynamicPerfStrategy:(id)a0;
- (long long)_dynamicStrategyModel:(id)a0 outputValueWithInput:(long long)a1;
- (long long)_calculateOutputBitrate:(id)a0 withInput:(long long)a1;
- (void)_updateFrequencyControlCacheWithDynamicStrategyModel:(id)a0;
- (BOOL)strategySwitch;
- (void)_applyDynamicPerfStrategyIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)addNotificationObserver;

@end
