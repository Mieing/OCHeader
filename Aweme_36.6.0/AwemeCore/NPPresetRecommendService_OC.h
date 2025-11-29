@class VEAIMomentAlgorithm, NSString, NPRecommendFeatureConfig, NPVEFeatureDBManager, VEAIMomentBIMConfig;
@protocol NPPresetRecommendExtractFrameConfigDelegate, NPPresetRecommendAlgorithmServiceDelegate;

@interface NPPresetRecommendService_OC : NSObject

@property (nonatomic) unsigned long long curPipelineStep;
@property (retain, nonatomic) NPRecommendFeatureConfig *featureConfig;
@property (copy, nonatomic) NSString *businessScene;
@property (retain, nonatomic) VEAIMomentAlgorithm *videoAIAlgorithm;
@property (retain, nonatomic) VEAIMomentAlgorithm *imageAIAlgorithm;
@property (retain, nonatomic) VEAIMomentBIMConfig *imageBimConfig;
@property (retain, nonatomic) VEAIMomentBIMConfig *videoNormalFrameBimConfig;
@property (retain, nonatomic) VEAIMomentBIMConfig *videoKeyFrameBimConfig;
@property (retain, nonatomic) NPVEFeatureDBManager *vefeatureDBManager;
@property (weak, nonatomic) id<NPPresetRecommendExtractFrameConfigDelegate> extractFrameDelegate;
@property (weak, nonatomic) id<NPPresetRecommendAlgorithmServiceDelegate> algorithmDelegate;

+ (void)removeExpiredVEFeatureFromDBWithExpirationHours:(long long)a0 completion:(id /* block */)a1;
+ (void)prefetchRecommendAlgorithm:(id)a0 completion:(id /* block */)a1;
+ (id)ilaFeaturesWithConfig:(id)a0;
+ (id)ilaTrackParamsWithConfig:(id)a0;
+ (BOOL)checkILAFeatureContainedWithMaterial:(id)a0 results:(id)a1 requiredFeatures:(id)a2;
+ (id)convertMaterialToILAAsset:(id)a0;
+ (id)supportedILAFeatures;
+ (BOOL)needILAFeaturesWithConfig:(id)a0;

- (void)clearMemory;
- (void)processMaterials:(id)a0 config:(id)a1 businessScene:(id)a2 completion:(id /* block */)a3;
- (void)processMaterials:(id)a0 toStage:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (void)handleILAFeaturesWithInitialResult:(id)a0 config:(id)a1 businessScene:(id)a2 completion:(id /* block */)a3;
- (void)p_processMaterials:(id)a0 config:(id)a1 businessScene:(id)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (void)extractFeaturesWithInitialResult:(id)a0 featureConfig:(id)a1 businessScene:(id)a2 completion:(id /* block */)a3;
- (BOOL)enableFrameExtractionForVEFeature;
- (void)p_initVEAlgorithmConfigsWithC3Enabled:(BOOL)a0;
- (void)extractFeatureForVideoMaterial:(id)a0 businessScene:(id)a1 completion:(id /* block */)a2;
- (void)extractFeatureForImageMaterial:(id)a0 completion:(id /* block */)a1;
- (void)trackFeatureExtractionWithMaterials:(id)a0 businessScene:(id)a1 originCostTimeDic:(id)a2 originErrorDic:(id)a3 ilaCostTimeDic:(id)a4;
- (void)extractFramesFromVideoMaterial:(id)a0 forStage:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (void)extractFrameFromImageMaterial:(id)a0 completion:(id /* block */)a1;
- (BOOL)supportExtractFrameForMaterial:(id)a0 atStage:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
