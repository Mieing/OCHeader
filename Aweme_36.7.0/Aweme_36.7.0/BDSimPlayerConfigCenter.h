@protocol BDSimPlayerGlobalConfiguring;

@interface BDSimPlayerConfigCenter : NSObject

@property (retain, nonatomic) id<BDSimPlayerGlobalConfiguring> globalInitConfig;

+ (void)setPlayerCustomHeader:(id)a0;
+ (void)setupGlobalConfig:(id)a0;
+ (void)setupStrategyStateConfig;
+ (long long)optimizeVideoPlayerLogFlag;
+ (id)getPlayerOptions;
+ (id)getPlayerStrategyOptions;
+ (id)getAppInfoConfig;
+ (id)getPlayerABConfig;
+ (id)getABValueWithKeys:(id)a0;
+ (id)getVideoEngineLocalServerABConfig;
+ (id)getPlayerGlobalThreadPoolABConfig;
+ (id)getPlayerStrategyABConfig;
+ (void)initHDRProcessorModel;
+ (void)initBMFProcessorModel;
+ (void)_setupALMVideoPlayerConfig;
+ (id)getVideoEngineLocalServerOptions:(id)a0;
+ (id)getPlayerGlobalThreadPoolOptions:(id)a0;
+ (void)configPreloadStrategy:(id)a0;
+ (void)configSuperResolutionStrategy:(id)a0;
+ (void)registerStrategyPortraitsServiceNotice;
+ (void)registerStrategyPortraitsService:(id)a0;
+ (void)initHDRBrightnessConfig;
+ (id)shareInstance;

- (void).cxx_destruct;

@end
