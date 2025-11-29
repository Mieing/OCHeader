@class NSMutableDictionary, NSMutableArray;

@interface AWEImageTemplateModelDataRequestManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *insertTemplateModelCacheDic;
@property (retain, nonatomic) NSMutableDictionary *pannelResponseModellCacheDic;
@property (retain, nonatomic) NSMutableDictionary *categoryResponseModelCacheDic;
@property (retain, nonatomic) NSMutableDictionary *templateCategoriesCacheDic;
@property (retain, nonatomic) NSMutableDictionary *templateFintuningResultCacheDic;
@property (retain, nonatomic) NSMutableArray *allInsertModelCallback;
@property (retain, nonatomic) NSMutableArray *allPannelModelCallback;
@property (retain, nonatomic) NSMutableArray *allCategoryModelCallback;

+ (id)errorOfImageTemplateFetch;
+ (void)fetchCategoryInfoAndDefaultTemplateListResourcePreloadWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)fetchTemplateListsOfOtherCategoriesResourceWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)sharedInstance;

- (void)cleanTemplateListDataCache;
- (void)cleanTemplateFinetuningResultCache;
- (void)requestPannelResponseModelWithCommonParams:(id)a0 currentImageSize:(struct CGSize { double x0; double x1; })a1 templateScene:(long long)a2 currentImageURI:(id)a3 cropImageInfo:(id)a4 trackParams:(id)a5;
- (void)requestCategoryResponseModelWithCommonParams:(id)a0 templateScene:(long long)a1 categoryArray:(id)a2 trackParams:(id)a3;
- (id)getPannelResponseModelWithImageURI:(id)a0;
- (void)addPannelResponseModelCallback:(id /* block */)a0;
- (id)getCategoriesArrayWithTemplateScene:(long long)a0;
- (id)getCategoryResponseModelWithTemplateScene:(long long)a0;
- (void)addCategoryResponseModelCallback:(id /* block */)a0;
- (id)getInsertTemplateModelWithTemplateID:(id)a0;
- (void)requestInsertTemplateModelWithTemplateID:(id)a0;
- (void)addFetchInsertModelCallback:(id /* block */)a0;
- (void)insertTemplateModelCallBackWithModel:(id)a0 success:(BOOL)a1;
- (id)panelKeyForTemplateScene:(long long)a0;
- (void)pannelResponseModelCallBackWithModel:(id)a0 success:(BOOL)a1;
- (void)categoryResponseModelCallBackWithModel:(id)a0 success:(BOOL)a1;
- (void)adjustTemplatePositionByBachAlgorithmWithParams:(id)a0 completion:(id /* block */)a1;
- (id)getTemplateFinetuningResultWithParams:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
