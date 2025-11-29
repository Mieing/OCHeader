@class NSString, NSArray, NSDictionary;
@protocol ACCGenericEffectPanelMaterialFetcherDelegate;

@interface ACCGenericEffectPanelDataSource : NSObject

@property (copy, nonatomic) NSString *panelName;
@property (nonatomic) long long topLevelCategoryID;
@property (nonatomic) long long hotCategoryID;
@property (copy, nonatomic) NSArray *shieldTemplates;
@property (weak, nonatomic) id<ACCGenericEffectPanelMaterialFetcherDelegate> materialFetcherDelegate;
@property (copy, nonatomic) NSDictionary *extraRequestParams;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) unsigned long long sceneType;

- (id)commonRequestModel;
- (void)fetchCategoriesWithCompletion:(id /* block */)a0;
- (void)fetchSearchRecommendWordsWithFromEffectID:(id)a0 completion:(id /* block */)a1;
- (id)initWithPanelName:(id)a0 topLevelCategoryID:(long long)a1 hotCategoryID:(long long)a2 shieldTemplates:(id)a3 materialFetcherDelegate:(id)a4;
- (void)fetchSearchGenericEffectListWithKeyWord:(id)a0 fromEffectID:(id)a1 completion:(id /* block */)a2;
- (void)fetchFavoriteGenericEffectListWithCategory:(id)a0 loadMore:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)fetchGenericEffectListWithCategoryID:(long long)a0 categoryName:(id)a1 completion:(id /* block */)a2;
- (id)createGenericEffectPanelCategoryModelsWithCategoryModel:(id)a0;
- (void).cxx_destruct;

@end
