@interface ACCPicTemplateDataProvider : NSObject

+ (void)fetchPanelCategoriesWithRepository:(id)a0 dataContext:(id)a1 completion:(id /* block */)a2;
+ (void)fetchCategoryPicTemplatesWithCategory:(id)a0 repository:(id)a1 dataContext:(id)a2 completion:(id /* block */)a3;
+ (id)categoriesList;
+ (id)recommendTagMap;
+ (void)fetchDefaultPanelCategoriesWithRepository:(id)a0 dataContext:(id)a1 completion:(id /* block */)a2;
+ (id)buildTemplatesWithEffects:(id)a0 categoryId:(id)a1 categoryName:(id)a2;
+ (id)paramsForFetchTemplatesCategoriesFromLokiWith:(id)a0;
+ (id)buildTemplatesWithTemplates:(id)a0 categoryId:(id)a1 categoryName:(id)a2;
+ (void)fetchPanelCategoriesFromLokiWithDataContext:(id)a0 repository:(id)a1 completion:(id /* block */)a2;
+ (id)fetchPanelCategoryList;
+ (id)cachedCategoriesForDataContext:(id)a0 repository:(id)a1;
+ (void)updateCategories:(id)a0 forDataContext:(id)a1 repository:(id)a2;
+ (id)buildTemplatesWithRawModels:(id)a0 categoryId:(id)a1 categoryName:(id)a2;
+ (BOOL)needFilterPicTemplateWith:(id)a0;
+ (void)parseCategoryKeyFromRepository:(id)a0 dataContext:(id)a1 completion:(id /* block */)a2;
+ (id)appendDefaultTemplates:(id)a0 to:(id)a1;
+ (void)fetchPanelCategoriesTroughEPWithDataContext:(id)a0 repository:(id)a1 completion:(id /* block */)a2;
+ (id)buildCategoriesWithResponse:(id)a0;
+ (id)buildCategoriesWithOldResponse:(id)a0;
+ (id)shareInstance;
+ (id)panelName;

@end
