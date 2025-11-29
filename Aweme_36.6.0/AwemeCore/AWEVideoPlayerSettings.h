@interface AWEVideoPlayerSettings : NSObject

+ (id)sharedInstance;

- (long long)strategyRunningPreloadTaskCount;
- (void)strategyBusinessWithLiveEvent:(long long)a0;
- (BOOL)isStrategyExistDownloadTask;
- (long long)strategyIODemandLevel;
- (void)fetchRequestAfterLaunch;
- (void)recoverPlayerSettings;
- (void)registerStrategyPortraitsService;
- (void)dealWithVideoStrategies:(id)a0;
- (id)init;

@end
