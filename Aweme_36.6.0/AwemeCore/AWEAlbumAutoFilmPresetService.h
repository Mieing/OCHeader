@class NPGenericTemplateService_OC, NSArray, NSString, NPPresetRecommendService_OC;

@interface AWEAlbumAutoFilmPresetService : NSObject <NPGenericTemplateRecommendConfigDelegate>

@property (retain, nonatomic) NPGenericTemplateService_OC *service;
@property (retain, nonatomic) NPPresetRecommendService_OC *recommendService;
@property (copy, nonatomic) NSArray *recommendFeatureTypes;
@property (nonatomic) BOOL recommendIlaRealTimeFeatureExtractionEnabled;
@property (copy, nonatomic) NSString *recommendScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)featureConfig;
- (id)businessScene;
- (BOOL)c3FeatureEnabled;
- (id)bimAlgorithmModelList;
- (BOOL)supportFunctionForStage:(unsigned long long)a0;
- (unsigned long long)frameExtractionStrategy;
- (struct CGSize { double x0; double x1; })videoFrameSizeForVideo:(id)a0 forStage:(unsigned long long)a1;
- (id)requestTimesForVideo:(id)a0 forStage:(unsigned long long)a1;
- (BOOL)enableAccurateFrameExtractionForVEFeature;
- (id)recommendFeatureTypesStringArray;
- (void).cxx_destruct;
- (id)init;

@end
