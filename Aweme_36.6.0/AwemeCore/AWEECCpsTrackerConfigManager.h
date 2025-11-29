@class NSString, NSDictionary, NSArray, AWEECCpsTrackerConfig;

@interface AWEECCpsTrackerConfigManager : NSObject

@property (retain, nonatomic) AWEECCpsTrackerConfig *config;
@property (readonly, copy, nonatomic) NSString *configString;
@property (copy, nonatomic) NSDictionary *paramConfigMap;
@property (readonly, copy, nonatomic) NSArray *allkeys;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSArray *blockList;
@property (readonly, nonatomic) long long maxRetryCount;
@property (readonly, nonatomic) BOOL useNewApi;
@property (readonly, nonatomic) BOOL useOldApi;

+ (id)sharedInstance;

- (id)modelFromJSONDictionary:(id)a0;
- (long long)timeIntervalForRetry:(long long)a0;
- (id)configForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)remoteConfig;

@end
