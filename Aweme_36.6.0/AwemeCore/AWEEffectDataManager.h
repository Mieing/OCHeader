@class HTSVideoSepcialEffect, AWEEffectFilterDataManager;

@interface AWEEffectDataManager : NSObject

@property (retain, nonatomic) AWEEffectFilterDataManager *effectFilterDataManager;
@property (retain, nonatomic) HTSVideoSepcialEffect *timeEffectManager;
@property (readonly, nonatomic) BOOL isFetching;

- (id /* block */)effectFilterPathBlock;
- (long long)downloadStatusOfEffect:(id)a0;
- (void)addEffectToDownloadQueue:(id)a0;
- (void)addEffectToDownloadQueue:(id)a0 preload:(BOOL)a1;
- (id)effectIdWithType:(unsigned long long)a0;
- (id)allTimeEffects;
- (void)resetTimeForbiddenStyle;
- (id)timeEffectWithType:(long long)a0;
- (id)timeEffectColorWithType:(long long)a0;
- (id)timeEffectDescriptionWithType:(long long)a0;
- (id)normalEffectWithID:(id)a0;
- (id)builtinNormalEffects;
- (id)normalEffectPlatformModel;
- (double)effectDurationForNormalEffect:(id)a0;
- (id)maskColorForNormalEffect:(id)a0;
- (void)updateNormalEffects;
- (void).cxx_destruct;

@end
