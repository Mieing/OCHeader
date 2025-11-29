@class NSMutableDictionary, IESLiveGCDTimer, IESEffectModel, NSObject;
@protocol OS_dispatch_group;

@interface IESLiveEffectRecommendServiceImpl : IESLiveGeneralBaseService <IESLiveEffectRecommendService>

@property (retain, nonatomic) NSObject<OS_dispatch_group> *resourceDownloadGroup;
@property (retain, nonatomic) NSMutableDictionary *recommendEffect;
@property (retain, nonatomic) IESLiveGCDTimer *fadeTimer;
@property (retain, nonatomic) IESEffectModel *guideRecommendModel;
@property (nonatomic) double effectPrepareStartTime;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (BOOL)serviceNeedBringInAnchorRoom;
- (void)serviceUninstall;
- (void)downloadEffect:(id)a0 completion:(id /* block */)a1;
- (void)iconRecommendEffect:(BOOL)a0;
- (void)getCategoryUnShownEffect:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldPermeateEffect:(id)a0;
- (void)trackRecommendEffectShow:(id)a0 isGuide:(BOOL)a1 status:(long long)a2 type:(unsigned long long)a3;
- (void)stopFadeTimer;
- (void)trackRecommendEffectClicked:(id)a0 categoryKey:(id)a1 isGuide:(BOOL)a2;
- (void)storeRecommendDate:(BOOL)a0;
- (void)trackToolBarItemDisclosure:(id)a0 categoryKey:(id)a1 isGuide:(BOOL)a2;
- (BOOL)isRecommendSameDate:(BOOL)a0;
- (void)preparePMInsertEffect;
- (void)prepareActivityEffect;
- (void)prepareInteractEffect;
- (void)prepareGalileoEffect;
- (void)showRecommendEffect:(BOOL)a0;
- (void).cxx_destruct;
- (void)setup;

@end
