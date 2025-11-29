@interface AWEECPhotoSearchLynxUtils : NSObject

+ (id)abPreloadConfig;
+ (id)settingsPreloadConfig;
+ (BOOL)headerLynxPreloadEnable;
+ (id)headerLynxPreloadABConfig;
+ (id)headerLynxPreloadSettingsConfig;
+ (id)cellConfigsWithEntrance:(id)a0 abConfig:(id)a1 settings:(id)a2;
+ (BOOL)shouldUseAnnieXWithDynamicPatch:(id)a0;
+ (id)p_schemaConfigKey:(id)a0;
+ (id)cellConfigsWithEntrance:(id)a0 preloadConfig:(id)a1;
+ (id)preCreateViewModelsWithSearchEntrance:(id)a0 cachalotContext:(id)a1;
+ (id)preloadHeaderLynxWithEntrance:(id)a0;
+ (id)patchModelWithConfig:(id)a0;
+ (id)lynxCardPreloadModelsWithEntrance:(id)a0;
+ (BOOL)enableLynxEstimateHeight;
+ (long long)lynxEstimateHeightForSchema:(id)a0;
+ (double)lynxEstimateHeightUpdateMaxDelay;
+ (double)lynxEstimateHeightUpdateAfterDelay;

@end
