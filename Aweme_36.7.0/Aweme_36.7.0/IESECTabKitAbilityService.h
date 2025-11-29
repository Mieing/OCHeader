@class NSString, NSMutableDictionary, IESECTabKitRouterParameters;

@interface IESECTabKitAbilityService : IESECTabKitService <IESECTabKitAbilityService>

@property (retain, nonatomic) IESECTabKitRouterParameters *params;
@property (retain, nonatomic) NSMutableDictionary *abilityConfigs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPadAdaptionMode;
- (BOOL)enableSyncReload;
- (long long)abilityConfigForKey:(id)a0;
- (BOOL)enableNaPrefetchOpt;
- (BOOL)enableBtmCustomPage;
- (BOOL)enableSplitContainerOpt;
- (BOOL)useNewSplitContainer;
- (BOOL)enableSplitTopBarOpt;
- (BOOL)enableCommonOptV1;
- (BOOL)enableAnnieXContainer;
- (BOOL)enablePreProcessAnnieXModel;
- (BOOL)enableAnnieXWebCache;
- (BOOL)enablePreLoadAnnieOpt;
- (BOOL)enableNaPrefetchThreadOpt;
- (BOOL)enableNaPrefetchSyncUpdate;
- (BOOL)annieXForce;
- (void)updateRouterParameters:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
