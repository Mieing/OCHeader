@class IESECTabKitAnniePreProcessRsp, NSString, IESECServiceProxy, IESECTabKitTabModel;
@protocol IESECTabKitAbilityService, IESECTabKitMonitorService, IESECTabKitHybridService;

@interface IESECTabKitPreProcessService : IESECTabKitService <IESECTabKitPreProcessService>

@property (retain, nonatomic) IESECServiceProxy<IESECTabKitHybridService> *hybridService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitAbilityService> *abilityService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitMonitorService> *monitorService;
@property (retain, nonatomic) IESECTabKitTabModel *anchorTabModel;
@property (retain) IESECTabKitAnniePreProcessRsp *preProcessRsp;
@property BOOL clearFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preprocessQueue;
+ (void)preCreateGlobalPreprocessQueue;
+ (void)triggerPuzzleContainerWarmup;

- (id)processedAnnieXCardModelForTab:(id)a0;
- (void)clearProcessedCache;
- (void)preProcessAnnieXCardModelWithAnchorTab:(id)a0 isSingleTabMode:(BOOL)a1;
- (id)anchorTabModelWithRouterParams:(id)a0;
- (unsigned long long)kernalTypeForTabModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
