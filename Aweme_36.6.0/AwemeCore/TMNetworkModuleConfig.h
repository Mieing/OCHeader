@class NSArray, NSDictionary;

@interface TMNetworkModuleConfig : TMModuleConfig

@property (readonly, copy, nonatomic) NSArray *aspect;
@property (readonly, nonatomic) unsigned long long reportSampleRate;
@property (readonly, copy, nonatomic) NSDictionary *readHTTPBodyBlackList;
@property (readonly, nonatomic) BOOL enableUpdateConfig;
@property (readonly, copy, nonatomic) NSDictionary *networkModuleConfig;
@property (readonly, nonatomic) unsigned long long backtraceSampleRate;

+ (BOOL)enableAddPageHashToRequestHeader;
+ (id)identifier;
+ (id)configKey;

- (Class)moduleClass;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
