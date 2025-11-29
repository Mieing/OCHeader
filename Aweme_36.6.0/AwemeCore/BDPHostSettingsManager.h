@class BDPThreadSafeDictionary;

@interface BDPHostSettingsManager : NSObject

@property (retain, nonatomic) BDPThreadSafeDictionary *settingsCacheTypeNormal;
@property (retain, nonatomic) BDPThreadSafeDictionary *settingsCacheTypeAB;
@property (retain, nonatomic) BDPThreadSafeDictionary *settingsCacheTypeMix;
@property (nonatomic) BOOL needCache;
@property (nonatomic) BOOL hostPluginLoaded;

+ (BOOL)hostSettingsAvaliable;
+ (id)sharedManager;
+ (id)dictionaryValueForKey:(id)a0;

- (long long)integerValueForKey:(id)a0 type:(long long)a1 defaultVal:(long long)a2;
- (BOOL)boolValueForKey:(id)a0 type:(long long)a1 defaultVal:(BOOL)a2;
- (id)dictionaryValueForKey:(id)a0 type:(long long)a1;
- (float)floatValueForKey:(id)a0 type:(long long)a1 defaultVal:(float)a2;
- (id)stringValueForKey:(id)a0 type:(long long)a1;
- (id)arrayValueForKey:(id)a0 type:(long long)a1;
- (id)queryHostExposureExperiments;
- (id)getAllSettingsWithABSDK:(BOOL)a0;
- (double)settingsUpdateTime;
- (BOOL)checkNeedCache;
- (BOOL)boolValueWithoutCacheForKey:(id)a0 type:(long long)a1 defaultVal:(BOOL)a2;
- (long long)integerValueWithoutCacheForKey:(id)a0 type:(long long)a1 defaultVal:(long long)a2;
- (float)floatValueWithoutCacheForKey:(id)a0 type:(long long)a1 defaultVal:(float)a2;
- (id)stringValueWithoutCacheForKey:(id)a0 type:(long long)a1;
- (id)arrayValueWithoutCacheForKey:(id)a0 type:(long long)a1;
- (id)dictionaryValueWithoutCacheForKey:(id)a0 type:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)dictionaryValueForKey:(id)a0;

@end
