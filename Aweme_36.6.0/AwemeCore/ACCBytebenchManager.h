@interface ACCBytebenchManager : NSObject

@property (copy, nonatomic) id /* block */ cameraConfigBlock;

+ (double)currentDeviceScore;
+ (void)_aweLazyRegisterStaticLoad;
+ (void)registerByteBenchSDK;
+ (void)registerByteBenchStrategy;
+ (void)preloadCameraContext;
+ (void)updateRecordModeInfoWith:(id)a0;
+ (void)updateFeatureForDowngrade:(BOOL)a0;
+ (void)registerByteBenchFeature:(id)a0;
+ (id)sharedInstance;

- (id)cameraConfigInfo;
- (id)bytebenchStrategyDic;
- (id)deviceInfo;
- (void).cxx_destruct;

@end
