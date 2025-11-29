@class NSMutableDictionary, NSString, IESECServiceProxy, NSArray, NSDictionary, NSMutableArray, NSHashTable;
@protocol IESECTabKitMonitorService, IESECTabKitEventSubscriber, IESECTabKitAbilityService, IESECTabKitEventService, IESECTabKitDataService;

@interface IESECTabKitHybridService : IESECTabKitService <IESECTabKitTabElementDelegate, IESECTabKitPuzzleTabDelegate, IESECTabKitHybridService> {
    NSMutableArray *_bridges;
    NSHashTable *_hybridElements;
    NSMutableDictionary *_tabElementDict;
}

@property (retain, nonatomic) IESECServiceProxy<IESECTabKitMonitorService> *monitorService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitEventService, IESECTabKitEventSubscriber> *eventService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitAbilityService> *abilityService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *bridges;
@property (nonatomic) BOOL disableSSR;
@property (copy, nonatomic) NSDictionary *ssrDowngradeInfo;

+ (id)updateHybridContainerUrl:(id)a0 extraParams:(id)a1 routerParams:(id)a2 enableNaPrefetchOpt:(BOOL)a3 isAnchorTab:(BOOL)a4;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)registerBridge:(id)a0;
- (void)tabElementHybridViewDidCreate:(id)a0;
- (void)tabElement:(id)a0 hybridViewDidFinishLoadWithURL:(id)a1 error:(id)a2;
- (void)tabElement:(id)a0 visibilityDidChange:(BOOL)a1;
- (void)tabElement:(id)a0 hybridViewDidScroll:(id)a1;
- (void)removeTabElementForTabID:(unsigned long long)a0;
- (void)registerCommonBridges;
- (void)registerHybridElement:(id)a0;
- (id)createTabElementWithModel:(id)a0;
- (id)createTabElementWithModel:(id)a0 isPreload:(BOOL)a1;
- (id)tabElementForTabModel:(id)a0;
- (id)scrollViewForTabModel:(id)a0;
- (id)initialDataWithCurrentTab:(id)a0 bottomTab:(id)a1;
- (id)initialDataWithCurrentTab:(id)a0 bottomTab:(id)a1 extra:(id)a2;
- (id)rootGlobalPropsWithURL:(id)a0 initialData:(id)a1;
- (id)updateHybridContainerUrl:(id)a0 extraParams:(id)a1 isAnchorTab:(BOOL)a2;
- (void)checkFirstScreenTabDataConsistencyWithBFFModel:(id)a0;
- (void)checkTabsHybridContainerTypeForceAnnieX:(id)a0;
- (id)currentExistTabElementTabModels;
- (BOOL)checkBridgeEnvWithCallBack:(id /* block */)a0;
- (long long)updateTabModel:(long long)a0 bundleUrl:(id)a1 query:(id)a2;
- (id)formatTabsInfoFromTabsModel:(id)a0;
- (id)tabElementForTabID:(unsigned long long)a0;
- (id)tabElementKey:(id)a0;
- (id)p_createTabElementForModel:(id)a0;
- (void)reloadTabElement:(id)a0 withModel:(id)a1 isPreload:(BOOL)a2;
- (id)addAbilityConfigParams:(id)a0;
- (void)configTabElement:(id)a0 withModel:(id)a1 mergeAnchorParams:(BOOL)a2;
- (BOOL)shouldRequestTabData:(id)a0;
- (void)updateTabModel:(id)a0 withResponse:(id)a1;
- (void)requestTabDataWithModel:(id)a0 completion:(id /* block */)a1;
- (void)configPuzzleTabElement:(id)a0 withModel:(id)a1 mergeAnchorParams:(BOOL)a2;
- (void)configHybridTabElement:(id)a0 withModel:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
