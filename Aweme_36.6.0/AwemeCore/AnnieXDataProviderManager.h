@class NSDictionary, NSString;

@interface AnnieXDataProviderManager : NSObject <AnnieXDataProviderProtocol>

@property (copy) NSDictionary *globalCache;
@property (copy) NSDictionary *globalContextCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (unsigned long long)serviceType;
+ (id)shareInstance;

- (Class)schemaClass;
- (Class)schemaClassWithContainerType:(id)a0 engineType:(id)a1;
- (void)provideDefaultCardDataWithCardModel:(id)a0;
- (void)provideInstanceDataWitCardModel:(id)a0 schemaClass:(Class)a1;
- (void)provideDefaultDataWithContext:(id)a0;
- (void)provideInstanceDataWitContext:(id)a0 schemaClass:(Class)a1;
- (id)fetchCardModelWithBid:(id)a0 urlString:(id)a1 engineType:(id)a2 containerType:(id)a3 schemaClass:(Class)a4 queryItem:(id)a5;
- (id)fetchContextWithBid:(id)a0 urlString:(id)a1 engineType:(id)a2 containerType:(id)a3 schemaClass:(Class)a4 queryItem:(id)a5;
- (id)fetchCardModelWithBid:(id)a0 urlString:(id)a1 engineType:(id)a2 schemaClass:(Class)a3 queryItem:(id)a4;
- (id)p_fetchCardModelFromCacheWithBid:(id)a0 bizDataProvide:(id)a1;
- (void)p_updateInstanceCardModel:(id)a0 bizDataProvide:(id)a1 bid:(id)a2 urlString:(id)a3 engineType:(id)a4 containerType:(id)a5 schemaClass:(Class)a6 queryItems:(id)a7;
- (void)collectSLMonitorBaseInfoWithContainerType:(id)a0 cardModel:(id)a1 openTime:(long long)a2;
- (id)fetchBidWithQueryItems:(id)a0;
- (void)invokeServiceMethodWithSessionId:(id)a0 bizDataProvider:(id)a1 selector:(SEL)a2;
- (Class)p_getSchemaClassWithContainerType:(id)a0 engineType:(id)a1 bid:(id)a2;
- (id)p_generateParamsWithQueryItems:(id)a0 schemaClass:(Class)a1 urlString:(id)a2;
- (void)p_appendURLWithCardModel:(id)a0 forTargetEngineType:(id)a1;
- (id)p_generateParamWithUrl:(id)a0 schemaClass:(Class)a1;
- (void)p_provideLynxInstanceData:(id)a0 lynxParams:(id)a1;
- (void)p_provideWebInstanceData:(id)a0 webParams:(id)a1;
- (void)p_updateLynxKitParams:(id)a0 schemaPrams:(id)a1;
- (BOOL)p_matchedHostWhiteListWithUrl:(id)a0 allowList:(id)a1;
- (id)fetchCardModelWithBid:(id)a0 urlString:(id)a1 schemaClass:(Class)a2;
- (id)generateParamsWithSchemaClass:(Class)a0 urlString:(id)a1 containerType:(id)a2 engineType:(id)a3 bid:(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
