@interface AWESearchCachalotLiveDataController : AWESearchVerticalDataController

@property (copy, nonatomic) id /* block */ enterFromForParamsBlock;
@property (copy, nonatomic) id /* block */ fromGroupIDParamsBlock;
@property (copy, nonatomic) id /* block */ searchExtraParamsBlock;

- (id)searchScene;
- (long long)requestDataCount;
- (id)customRequestPath;
- (id)customSearchType;
- (Class)customResponseClass;
- (Class)customRequestParamsClass;
- (id)customInnerVCModelsFromOuterDataModels:(id)a0;
- (id)customAwemeModelFromOuterDataModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
