@class NSString;

@interface AWEVideoPlayerConfiguration : NSObject <AWEAppAwemeSettingMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getHDRBrightnessOffset:(id)a0 brightness:(double)a1;
+ (void)_setupIESVideoPlayerConfig;
+ (void)setupStrategyStateConfig;
+ (long long)optimizeVideoPlayerLogFlag;
+ (id)getVideoEngineLocalServerOptions;
+ (id)getPlayerOptions;
+ (id)getPlayerGlobalThreadPoolOptions;
+ (id)getPlayerStrategyOptions;
+ (void)configPreloadStrategy;
+ (void)configSuperResolutionStrategy;
+ (void)setPlayerCustomHeader;
+ (id)getAppInfoConfig;
+ (id)getPlayerABConfig;
+ (id)getABValueWithKeys:(id)a0;
+ (id)getVideoEngineLocalServerABConfig;
+ (id)getPlayerGlobalThreadPoolABConfig;
+ (id)getPlayerStrategyABConfig;
+ (void)initHDRProcessorModel;
+ (void)initBMFProcessorModel;
+ (id)getVideoTypeStrategy:(id)a0;
+ (double)getBrightnessOffset:(id)a0 currentBrightness:(double)a1;
+ (void)setupLazy;
+ (void)setHDRBrightnessStrategy:(id)a0;
+ (id)sharedInstance;
+ (void)setup;

- (void)awemeSettingDidChange;
- (id)init;
- (void)dealloc;

@end
