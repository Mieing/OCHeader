@class _TtC7BDADSDK15SettingsManager;

@interface BDADSDK.SettingsManager : NSObject {
    void /* unknown type, empty encoding */ settings;
    void /* unknown type, empty encoding */ retryCount;
    void /* unknown type, empty encoding */ mmkv;
    void /* unknown type, empty encoding */ fetchFinished;
    void /* unknown type, empty encoding */ atpRitSet;
    void /* unknown type, empty encoding */ atpRitRegex;
}

@property (class, nonatomic, readonly) _TtC7BDADSDK15SettingsManager *shared;

+ (id)adSDKSettingsResponseNotification;

- (BOOL)hitRitForReplaceTag:(id)a0;
- (id)deviceModelScore;
- (void)fetchSettings;
- (id)getSettings;
- (BOOL)boolValueFor:(id)a0 defaultValue:(BOOL)a1;
- (long long)integerValueFor:(id)a0 defaultValue:(long long)a1;
- (double)floatValueFor:(id)a0 defaultValue:(double)a1;
- (id)stringValueFor:(id)a0;
- (id)arrayValueFor:(id)a0;
- (id)dictionaryValueForSettingsKeyWithSettingsKey:(id)a0;
- (id)objectValueFor:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
