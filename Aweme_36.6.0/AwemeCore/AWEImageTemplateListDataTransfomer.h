@class NSArray, AWETemplateListTemplateInfoResponseModel;

@interface AWEImageTemplateListDataTransfomer : NSObject

@property (retain, nonatomic) NSArray *templateCategoriesArray;
@property (retain, nonatomic) NSArray *imageTemplatesArray;
@property (retain, nonatomic) AWETemplateListTemplateInfoResponseModel *insertTemplateModel;
@property (nonatomic) BOOL shouldInsertTemplateAtFirst;

+ (id)errorOfImageTemplateFetch;
+ (id)getTemplateInfoModelWithDetailResponseModel:(id)a0;

- (void)getTheTemplateListWithCategoryModel:(id)a0 templateInfoModel:(id)a1 templateCategoriesArray:(id)a2 shouldInsertTemplateAtFirst:(BOOL)a3 insertTemplateID:(id)a4 insertTemplateModel:(id)a5 completion:(id /* block */)a6;
- (void)getTemplateListWithPannelResponseModel:(id)a0 templateCategoriesArray:(id)a1 shouldInsertTemplateAtFirst:(BOOL)a2 insertTemplateModel:(id)a3 completion:(id /* block */)a4;
- (void)getTemplateListWithCategoryResponseModel:(id)a0 shouldInsertTemplateAtFirst:(BOOL)a1 insertTemplateModel:(id)a2 completion:(id /* block */)a3;
- (void)storeCategoryInfoAndDefaultTemplateListResourceWithModel:(id)a0 insertTemplateID:(id)a1;
- (void)insertTheTemplateAtFirstWith:(id)a0;
- (void)storeTemplateListsOfOtherCategoriesResourceWithModel:(id)a0 insertTemplateID:(id)a1;
- (id)findCurrentCategoryModelWithName:(id)a0 isDefault:(BOOL)a1;
- (void)setupTemplateArrayWithCategoryModel:(id)a0 templateInfoArray:(id)a1 insertTemplateID:(id)a2;
- (id)doTheFirstInsertCheckForArray:(id)a0 withInsertTemplateID:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
