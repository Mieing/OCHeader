@class NSString, NSMapTable, NSHashTable, NSError, NSMutableArray, NSMutableDictionary;
@protocol IESPrefetchCapability, IESLatchTemplateOutput;

@interface IESLatchConfiguration : NSObject <IESLatchNativePrefetchWorkerProtocol> {
    BOOL _enabled;
}

@property (copy, nonatomic) NSString *business;
@property (retain, nonatomic) id<IESPrefetchCapability> capability;
@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) NSMutableArray *schemaResolvers;
@property (retain, nonatomic) NSMapTable *pageHashMap;
@property (retain, nonatomic) NSMutableArray *templates;
@property (retain, nonatomic) id<IESLatchTemplateOutput> latchTemplateOutput;
@property (retain, nonatomic) NSMapTable *schemaHashMap;
@property (retain, nonatomic) NSError *loadFileError;
@property (retain, nonatomic) NSError *versionError;
@property (nonatomic) BOOL isLatchConfigLoadTriggered;
@property (retain, nonatomic) NSMutableDictionary *ioCostMetric;
@property (nonatomic) BOOL isLatchConfigNotExist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addEventDelegate:(id)a0;
- (void)prefetchForSchema:(id)a0 withVariable:(id)a1;
- (id)p_convertConfigFromJSON:(id)a0 withEvent:(id)a1;
- (void)eventDidFinishLoadConfig:(id)a0;
- (void)removeAllConfigurations;
- (void)loadConfigurationJSON:(id)a0 bag:(id)a1;
- (id)loadConfigurationDict:(id)a0 withEvent:(id)a1;
- (void)p_monitorService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (id)pageForUrl:(id)a0;
- (id)resolveSchema:(id)a0 routerParam:(id)a1;
- (void)prefetchAPI:(id)a0;
- (BOOL)checkPageVersion:(id)a0 url:(id)a1;
- (void)loadConfigurationJSON:(id)a0 cleanExpiredDataAsync:(BOOL)a1;
- (void)loadAllConfigurations:(id)a0;
- (void)registerSchemaResolver:(id)a0;
- (BOOL)pageTemplateExistForUrl:(id)a0;
- (id)initWithCapability:(id)a0 business:(id)a1;
- (void)reportIOCost;
- (void)loaderWithLogInfoMessage:(id)a0;
- (void)eventDidFinishPrefetch:(id)a0;
- (void)eventDidFinishPrefetchAPI:(id)a0;
- (void)eventDidFinishFetchData:(id)a0;
- (id)getSchema:(id)a0 routerParam:(id)a1;
- (void).cxx_destruct;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)a0;

@end
