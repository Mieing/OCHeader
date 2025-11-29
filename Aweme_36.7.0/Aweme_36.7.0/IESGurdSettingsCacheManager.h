@class NSDictionary;

@interface IESGurdSettingsCacheManager : NSObject

@property (copy, nonatomic) NSDictionary *settingsResponseDictionary;

+ (void)setJSONObjectWithDataFunction:(void /* function */ *)a0;
+ (id)sharedManager;

- (id)cachedSettingsResponse;
- (void)saveResponseDictionary:(id)a0;
- (id)settingsDataWithPath:(id)a0;
- (void)removeLocalFiles;
- (void).cxx_destruct;
- (void)cleanCache;

@end
