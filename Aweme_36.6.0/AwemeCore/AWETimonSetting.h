@class NSDictionary;

@interface AWETimonSetting : NSObject

@property (retain, nonatomic) NSDictionary *ruleEngineConfig;

+ (id)sharedInstance;

- (void)registerConfigUpdatedBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)settings;

@end
