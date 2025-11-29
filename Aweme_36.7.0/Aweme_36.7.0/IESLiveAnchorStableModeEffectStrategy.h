@class IESLiveStableModeStrategy, NSString;

@interface IESLiveAnchorStableModeEffectStrategy : NSObject <IESLiveRevenueInteractAction, IESLiveSocialInteractAction>

@property (retain, nonatomic) IESLiveStableModeStrategy *effectModelStrategy;
@property (retain, nonatomic) IESLiveStableModeStrategy *effectPNGScaleStrategy;
@property (nonatomic) long long lastPNGScale;
@property (nonatomic) BOOL isEffectModelStrategyEnable;
@property (nonatomic) BOOL isPNGScaleEnable;
@property (nonatomic) BOOL isStableModeV2Enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (void)interactionModeEndedWithLayout:(id)a0;
- (void)willUpdateStreamConfigWithParams:(id *)a0;
- (void)didUpdateStreamConfigWithParams:(id)a0;
- (id)initWithStableModeV2Enable:(BOOL)a0;
- (void)createEffectModelStrategy;
- (void)createPNGScaleStrategy;
- (void)startEffectModelStrategy;
- (void)startPNSScaleStrategy;
- (void)stopEffectModelStrategy;
- (void)stopPNSScaleStrategy;
- (void)endCommunityInteractWithScene:(unsigned long long)a0;
- (void)reloadEffectIfNeed;
- (void)switchEffectPNGScale:(long long)a0;
- (void)preloadStrategyAlgorithmModel;
- (void)registerEffectStrategies;
- (void)startEffectStrategies;
- (void)stopEffectStrategies;
- (void).cxx_destruct;

@end
