@class NSDictionary;

@interface AWEHPPintopConfigManager : NSObject

@property (retain, nonatomic) NSDictionary *modelMap;

+ (id)shareInstance;

- (id)getConfigChannelModelWithTabID:(id)a0;
- (long long)getPinTopTriggerTimeWithTabID:(id)a0;
- (void)setUp;
- (void).cxx_destruct;

@end
