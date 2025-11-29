@interface AWEAIOriginalDataController : AWESearchCachalotDataController

- (Class)customResponseClass;
- (Class)customRequestParamsClass;
- (void)refreshResponse:(id)a0;
- (id)customInnerVCModelsFromOuterDataModels:(id)a0;
- (id)customAwemeModelFromOuterDataModel:(id)a0;

@end
