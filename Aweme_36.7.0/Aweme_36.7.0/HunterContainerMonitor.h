@class NSString, NSNumber, NSDictionary;

@interface HunterContainerMonitor : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *rawSchema;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *sURL;
@property (copy, nonatomic) NSString *bundle;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *fromType;
@property (copy, nonatomic) NSNumber *bulletUpdateType;
@property (copy, nonatomic) NSNumber *statusLoad;
@property (copy, nonatomic) NSString *errorDesc;
@property (copy, nonatomic) NSString *bulletResFrom;
@property (copy, nonatomic) NSString *templateBundleSource;
@property (nonatomic) unsigned long long timestampStartBusiness;
@property (nonatomic) unsigned long long timestampStartServerDataParse;
@property (nonatomic) unsigned long long timestampEndServerDataParse;
@property (nonatomic) unsigned long long timestampStartClientDataParse;
@property (nonatomic) unsigned long long timestampEndClientDataParse;
@property (nonatomic) unsigned long long timestampStartPreserveDataParse;
@property (nonatomic) unsigned long long timestampEndPreserveDataParse;
@property (nonatomic) unsigned long long timestampStartBullet;
@property (nonatomic) unsigned long long timestampStartSchemaProcessors;
@property (nonatomic) unsigned long long timestampEndSchemaProcessors;
@property (nonatomic) unsigned long long timestampStartClientDataProcessors;
@property (nonatomic) unsigned long long timestampEndClientDataProcessors;
@property (nonatomic) unsigned long long timestampStartStorageDataProcessors;
@property (nonatomic) unsigned long long timestampEndStorageDataProcessors;
@property (nonatomic) unsigned long long timestampEndLoad;
@property (nonatomic) unsigned long long durationBusiness;
@property (nonatomic) unsigned long long durationClientDataParse;
@property (nonatomic) unsigned long long durationServerDataParse;
@property (nonatomic) unsigned long long durationPreserveDataParse;
@property (nonatomic) unsigned long long durationSchemaProcessors;
@property (nonatomic) unsigned long long durationClientDataProcessors;
@property (nonatomic) unsigned long long durationStorageDataProcessors;
@property (nonatomic) unsigned long long durationLoad;
@property (copy, nonatomic) NSDictionary *bulletPerfDict;
@property (nonatomic) BOOL disableHunterMonitor;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)performanceDict;
- (BOOL)hasCacheWithParams:(id)a0 channel:(id)a1;
- (void)logBusinessStart;
- (void)logLoadEnd;
- (void)logContainerPerfClientWithFromType:(id)a0;
- (void)logBulletStart;
- (void)logClientDataProcessorsStart;
- (void)logClientDataProcessorsEnd;
- (void)logTimestampForProperty:(id)a0;
- (void)calcDuration;
- (id)initWithHunterContext:(id)a0;
- (void)logSchema:(id)a0;
- (void)logClientDataParseStart;
- (void)logClientDataParseEnd;
- (void)logServerDataParseStart;
- (void)logServerDataParseEnd;
- (void)logPreserveDataParseStart;
- (void)logPreserveDataParseEnd;
- (void)logSchemeProcessorsStart;
- (void)logSchemeProcessorsEnd;
- (void)logStorageDataProcessorsStart;
- (void)logStorageDataProcessorsEnd;
- (void)updateBulletResFrom:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (unsigned long long)currentTimeInterval;

@end
