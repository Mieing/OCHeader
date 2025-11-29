@class HTSEventContext, IESLiveGuideModel, ListCategoryResponse_CategoryNode, IESLiveOptCategoryAPI, NSArray;

@interface IESLiveOptCategoryStore : NSObject

@property (retain, nonatomic) IESLiveOptCategoryAPI *listApi;
@property (nonatomic) unsigned long long liveType;
@property (nonatomic) BOOL isGame;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) ListCategoryResponse_CategoryNode *selectedSection;
@property (retain, nonatomic) ListCategoryResponse_CategoryNode *selectedCategory;
@property (copy, nonatomic) NSArray *optCategryModelList;
@property (copy, nonatomic) NSArray *recentModelList;
@property (copy, nonatomic) id /* block */ selectedCategoryDidChanged;

- (id)initWithCategoryModel:(id)a0;
- (void)fetchOptCategoriesWithCurrentCategory:(id)a0 liveType:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)shouldUseCategoryOptimizeAB;
- (id)getSelectedCategory;
- (id)lastSelectedCategoryCache:(unsigned long long)a0;
- (id)categoryModelWithId:(long long)a0;
- (id)queryModelBy:(id)a0;
- (void)checkCurrentCategoryWithLiveType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)fetchOptCategoriesWithCompletion:(id /* block */)a0;
- (void)refreshOptCategoryListWithResponseListArray:(id)a0;
- (id)categoryNodeFromLiveModel;
- (id)getDefaultSelectedCategory;
- (id)matchSectionWithSectionId:(long long)a0 sectionList:(id)a1;
- (id)compareSecondCategoryList:(id)a0 oldCategoryList:(id)a1;
- (BOOL)checkSectionHasNewSubCategory:(id)a0;
- (id)allNewWithSubCategoryList:(id)a0;
- (id)lastCacheCategoryList;
- (void)cacheCategoryList:(id)a0;
- (id)compareNewStatusWithCategoryList:(id)a0 oldCategoryList:(id)a1;
- (void)selectCategoryWithTargetCategory:(id)a0;
- (void)resetSelectedSection;
- (id)lastSelectedCategoryLastCacheKeyPB:(unsigned long long)a0;
- (id)lastCategoryListCacheKey;
- (id)lastRecentCacheKey;
- (id)getGameCategoryNodeWithDict:(id)a0;
- (void)markCategoryID:(long long)a0 selected:(BOOL)a1;
- (id)lastSelectedCategoryLastCacheKeyPB;
- (void)cacheLiveCategory:(id)a0;
- (id)getRecentUsage;
- (void)saveRecentUsage:(id)a0;
- (BOOL)isCategoryLegal;
- (void).cxx_destruct;
- (void)fetchCache;

@end
