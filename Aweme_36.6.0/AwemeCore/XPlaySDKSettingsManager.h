@class NSDictionary, NSString;

@interface XPlaySDKSettingsManager : NSObject

@property (copy, nonatomic) NSDictionary *settings;
@property (copy, nonatomic) NSDictionary *cacheSettings;
@property (copy, nonatomic) NSString *ctxInfos;

+ (id)sharedManager;

- (id)mmkv;
- (void)fetchIfNeeded;
- (void)fetchFromNet:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)dictionaryValueForKey:(id)a0;
- (id)settingUrl;

@end
