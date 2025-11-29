@class NSString;

@interface IESLiveInteractEffectStrategyServiceImpl : NSObject <IESLiveInteractEffectStrategyService>

@property (nonatomic) long long lastPNGScale;
@property (nonatomic) BOOL startedEffect;
@property (nonatomic) BOOL startedEffectPNG;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)startEffectModelStrategy;
- (void)stopEffectModelStrategy;
- (void)stopPNSScaleStrategy;
- (void)reloadEffectIfNeed;
- (void)switchEffectPNGScale:(long long)a0;
- (void)downloadStrategyAlgorithmModel;

@end
