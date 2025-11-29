@class NSMutableDictionary, HTSEventContext, IESLiveGCDTimer, IESEffectModel, NSObject;
@protocol OS_dispatch_group;

@interface IESLiveFaceEffectIconRecommendServiceImpl : NSObject <IESLiveFaceEffectIconRecommendService>

@property (retain, nonatomic) NSObject<OS_dispatch_group> *resourceDownloadGroup;
@property (retain, nonatomic) NSMutableDictionary *recommendEffect;
@property (retain, nonatomic) IESLiveGCDTimer *fadeTimer;
@property (retain, nonatomic) IESEffectModel *guideRecommendModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) double effectPrepareStartTime;

- (void)iconRecommendEffect:(BOOL)a0 diContext:(id)a1;
- (void)updateTrackContext:(id)a0 diContext:(id)a1;
- (void)trackRecommendEffectShow:(id)a0 isGuide:(BOOL)a1 status:(long long)a2 type:(unsigned long long)a3;
- (void)stopFadeTimer;
- (void)trackRecommendEffectClicked:(id)a0 categoryKey:(id)a1 isGuide:(BOOL)a2;
- (void)storeRecommendDate:(BOOL)a0;
- (void)trackToolBarItemDisclosure:(id)a0 categoryKey:(id)a1 isGuide:(BOOL)a2;
- (BOOL)isRecommendSameDate:(BOOL)a0;
- (void)preparePMInsertEffectWithDIContext:(id)a0;
- (void)prepareActivityEffectWithDIContext:(id)a0;
- (void)prepareInteractEffectWithDIContext:(id)a0;
- (void)prepareGalileoEffectWithDIContext:(id)a0;
- (void)showRecommendEffect:(BOOL)a0 diContext:(id)a1;
- (void)getCategoryUnShownEffect:(id)a0 completion:(id /* block */)a1 diContext:(id)a2;
- (void)downloadEffect:(id)a0 completion:(id /* block */)a1 diContext:(id)a2;
- (BOOL)shouldPermeateEffect:(id)a0 diContext:(id)a1;
- (void).cxx_destruct;
- (void)cleanCache;
- (id)init;

@end
