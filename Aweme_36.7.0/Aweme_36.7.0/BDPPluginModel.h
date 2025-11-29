@class NSString, NSArray, NSDictionary;

@interface BDPPluginModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *pluginId;
@property (copy, nonatomic) NSString *pluginVersion;
@property (copy, nonatomic) NSArray *urls;
@property (nonatomic) long long strategy_expiration_time;
@property (copy, nonatomic) NSString *preload_strategy;
@property (nonatomic) unsigned long long pluginSource;
@property (retain, nonatomic) NSDictionary *metaInfo;
@property (copy, nonatomic) NSString *pluginXxhash;
@property (copy, nonatomic) NSString *minBaseBundleVersion;

- (id)initWithODRDictionary:(id)a0 pluginId:(id)a1;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
