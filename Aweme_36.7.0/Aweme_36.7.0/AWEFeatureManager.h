@class NSDictionary;

@interface AWEFeatureManager : NSObject

@property (retain) NSDictionary *localKeyConfigureDict;

+ (BOOL)isFeatureFlagEnable:(id)a0;
+ (BOOL)internalGetFeatureFlagBoolValue:(id)a0;
+ (id)sharedSingleton;

- (void)loadLocalKeyConfigure;
- (BOOL)debug_getFeatureFlagBoolValue:(id)a0;
- (BOOL)getFeatureFlagBoolValue:(id)a0;
- (void).cxx_destruct;

@end
