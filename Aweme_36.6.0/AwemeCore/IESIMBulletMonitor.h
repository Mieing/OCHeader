@class NSNumber, NSString, NSDictionary;

@interface IESIMBulletMonitor : MTLModel <MTLJSONSerializing, IESIMBulletContainerMonitorProtocol>

@property (retain, nonatomic) NSNumber *bulletUpdateType;
@property (retain, nonatomic) NSNumber *statusLoad;
@property (copy, nonatomic) NSString *bulletResFrom;
@property (copy, nonatomic) NSString *errorDesc;
@property (copy, nonatomic) NSString *resourceFrom;
@property (nonatomic) unsigned long long timestampStartServerDataParse;
@property (nonatomic) unsigned long long timestampEndServerDataParse;
@property (nonatomic) unsigned long long timestampStartClientDataParse;
@property (nonatomic) unsigned long long timestampEndClientDataParse;
@property (nonatomic) unsigned long long timestampEndLoad;
@property (nonatomic) unsigned long long timestampStartBind;
@property (nonatomic) unsigned long long timestampStartBusiness;
@property (nonatomic) unsigned long long timestampStartBullet;
@property (nonatomic) unsigned long long durationBusiness;
@property (nonatomic) unsigned long long durationClientDataParse;
@property (nonatomic) unsigned long long durationServerDataParse;
@property (nonatomic) BOOL loading;
@property (nonatomic) long long preloadScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *dataIdentifier;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *sURL;
@property (nonatomic) long long loadType;
@property (copy, nonatomic) NSString *fromType;
@property (nonatomic) long long reuseType;
@property (copy, nonatomic) NSString *cacheFrom;
@property (nonatomic) long long bulletGeneratePreloadScene;
@property (retain, nonatomic) NSNumber *bulletGenerateType;
@property (retain, nonatomic) NSNumber *contentViewGenerateType;
@property (nonatomic) unsigned long long durationLoad;
@property (nonatomic) unsigned long long durationBindThread;
@property (nonatomic) unsigned long long durationPreLayout;
@property (retain, nonatomic) NSDictionary *extraParams;

+ (id)JSONKeyPathsByPropertyKey;

- (id)performanceDict;
- (void)endLoading;
- (id)p_trackParams;
- (unsigned long long)p_currentTimeInterval;
- (void)calcDuration;
- (void)logClientDataParseStart;
- (void)logClientDataParseEnd;
- (void)logServerDataParseStart;
- (void)logServerDataParseEnd;
- (void)logBulletScene:(id)a0 dataIdentifier:(id)a1 schema:(id)a2 cardType:(id)a3;
- (void)logBulletGenerateType:(long long)a0 contentViewGenerateType:(long long)a1 preloadScene:(long long)a2;
- (void)logStartBusinessWithTimestamp:(unsigned long long)a0;
- (void)startLoading:(BOOL)a0 withLoadType:(long long)a1;
- (void)logResourceFetched:(id)a0 errorDesc:(id)a1;
- (BOOL)p_hasCacheWithParams:(id)a0 channel:(id)a1;
- (long long)p_reuseTypeWithLoadType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
