@class NSDictionary, AWEComposerBeautyEffectViewModel;

@interface AWEComposerBeautyEffectCacheManager : NSObject

@property (copy, nonatomic) NSDictionary *resourceIDCacheKeyMapping;
@property (retain, nonatomic) AWEComposerBeautyEffectViewModel *effectViewModel;

+ (id)sharedManager;

- (long long)currentGender;
- (void)applySecondaryComposerItemWithResourceID:(id)a0 gender:(long long)a1;
- (id)resourceIDsForAppliedEffectsForGender:(long long)a0;
- (BOOL)userHasModifiedBeautyConfigInCameraPage;
- (void)cleanUpUnifiedBeautyResource;
- (void)setRatio:(double)a0 forEffectWithResourceID:(id)a1 tag:(id)a2 gender:(long long)a3;
- (double)ratioForEffectWithResourceID:(id)a0 tag:(id)a1 gender:(long long)a2;
- (void)updateWithBeautyEffectViewModel:(id)a0;
- (id)p_findEffectWrapperByResourceID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
