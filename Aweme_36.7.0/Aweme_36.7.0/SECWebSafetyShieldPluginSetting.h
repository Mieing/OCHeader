@protocol SECWebTrafficFeatureDetector, SECWebSafetyPolicy;

@interface SECWebSafetyShieldPluginSetting : NSObject

@property (retain, nonatomic) id<SECWebSafetyPolicy> policy;
@property (retain, nonatomic) id<SECWebTrafficFeatureDetector> webFeatureDetector;

- (void).cxx_destruct;
- (id)init;

@end
