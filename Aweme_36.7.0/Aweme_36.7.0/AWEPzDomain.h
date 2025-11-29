@class NSString, AWEPzDomainRegisterModel, NSHashTable, NSDictionary, AWEPzRecordManager, AWEPzDomainModel;

@interface AWEPzDomain : NSObject <AWEPzDataManagerProtocol>

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) AWEPzRecordManager *recordManager;
@property (nonatomic) BOOL needTrackComponent;
@property (retain, nonatomic) AWEPzDomainRegisterModel *registerModel;
@property (retain, nonatomic) NSHashTable *engines;
@property (copy, nonatomic) NSDictionary *componentModelMap;
@property (copy, nonatomic) NSDictionary *strategyModelMap;
@property (retain, nonatomic) AWEPzDomainModel *defaultConfig;
@property (retain, nonatomic) AWEPzDomainModel *config;
@property (nonatomic) long long configFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)domainConfigDidChange:(id)a0;
- (void)reloadComponentAndStrategyMap:(id)a0;
- (void)loadComponentAndStrategyMapIfNeed;
- (void)loadComponentAndStrategyMapIfNeedCompletion:(id /* block */)a0;
- (id)initWithRegisterModel:(id)a0;
- (id)createEngineWithConfig:(id)a0;
- (id)getAllEngines;
- (id)getComponentModelMap;
- (void)getComponentModelMapWithCompletion:(id /* block */)a0;
- (id)getStrategyModelMap;
- (void)getStrategyModelMapWithCompletion:(id /* block */)a0;
- (long long)domainConfigFrom;
- (id)currentDataHash;
- (void).cxx_destruct;
- (void)setup;

@end
