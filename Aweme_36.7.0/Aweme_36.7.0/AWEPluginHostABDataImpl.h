@class NSString;

@interface AWEPluginHostABDataImpl : NSObject <BDPHostSettingsPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (long long)integerValueForKey:(id)a0 type:(long long)a1 defaultVal:(long long)a2;
- (BOOL)boolValueForKey:(id)a0 type:(long long)a1 defaultVal:(BOOL)a2;
- (id)dictionaryValueForKey:(id)a0 type:(long long)a1;
- (id)_getABObjectValueForKey:(id)a0;
- (double)floatValueForKey:(id)a0 type:(long long)a1 defaultVal:(double)a2;
- (id)stringValueForKey:(id)a0 type:(long long)a1;
- (id)arrayValueForKey:(id)a0 type:(long long)a1;
- (id)queryHostExposureExperiments;
- (id)getAllSettingsWithABSDK:(BOOL)a0;
- (double)settingsUpdateTime;

@end
