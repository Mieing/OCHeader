@class NSString;

@interface AWEIMStrategyConfigActionExchangeAnswer : NSObject <AWEIMStrategyConfigAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allConfigsDiskCache;
+ (void)setAllConfigsDiskCache:(id)a0;

- (void)p_addDefaultConfig:(id)a0 allConfigDict:(id)a1;
- (void)strategyPlatformColdup;
- (void)strategyPlatformRequestCompletion:(id)a0;

@end
