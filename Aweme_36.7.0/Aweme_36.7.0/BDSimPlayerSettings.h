@interface BDSimPlayerSettings : NSObject

+ (id)sharedInstance;

- (void)recoverPlayerSettings;
- (void)dealWithVideoStrategies:(id)a0;
- (void)fetchRequestAfterLaunch:(id)a0;
- (void)registerStrategyPortraitsServiceWithOpt:(BOOL)a0 AppService:(id)a1;

@end
