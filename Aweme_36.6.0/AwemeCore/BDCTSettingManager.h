@class NSDictionary;

@interface BDCTSettingManager : NSObject

@property (copy) NSDictionary *settings;
@property (readonly, nonatomic) NSDictionary *depthCaptureConfig;
@property (readonly, nonatomic) NSDictionary *containerConfig;

+ (id)sharedInstance;

- (id)trackStatusCallConfig;
- (BOOL)enablePrameterInitOptimize;
- (BOOL)enableSmashStageEvent;
- (BOOL)enableDepthCapture;
- (BOOL)enableDepthCameraCheck;
- (long long)warmupTimeout;
- (long long)depthCheckStage;
- (BOOL)enableNewCameraSession;
- (BOOL)enableTrackPredictCallStatus;
- (BOOL)enableXContainerWithScene:(id)a0;
- (BOOL)enableByteGuard;
- (long long)openAndCloseWaitTime;
- (BOOL)enableFaceApiIntegrate;
- (BOOL)enableInfoDetectTimeoutOpt;
- (double)infoDetectTimeout;
- (long long)infoDetectFrameLimit;
- (BOOL)enableNFCFunction;
- (id)certCollectConfig;
- (BOOL)enableCertCollectReport;
- (long long)certCollectTimeout;
- (long long)certCollectFrequencyInterval;
- (void).cxx_destruct;
- (void)updateSettings:(id)a0;
- (id)init;

@end
