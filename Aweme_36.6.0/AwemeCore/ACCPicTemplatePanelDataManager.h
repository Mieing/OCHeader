@class NSMutableDictionary, NSArray, NSDictionary, NSString, ACCPicTemplateModel, ACCRepositoryWorkspace, ACCPicTemplateCategoryModel;
@protocol ACCEditPicTemplateServiceProtocol, IESServiceProvider;

@interface ACCPicTemplatePanelDataManager : NSObject <ACCPicTemplatePanelDataProtocol>

@property (copy, nonatomic) NSArray *categoryModels;
@property (weak, nonatomic) ACCRepositoryWorkspace *workspace;
@property (copy, nonatomic) NSDictionary *originTemplateMap;
@property (copy, nonatomic) NSString *originProjectUUIDS;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCEditPicTemplateServiceProtocol> picTemplateService;
@property (retain, nonatomic) ACCPicTemplateCategoryModel *curCategoryModel;
@property (retain, nonatomic) ACCPicTemplateModel *curTemplateModel;
@property (retain, nonatomic) ACCPicTemplateModel *initialTemplateMode;
@property (retain, nonatomic) NSMutableDictionary *shouldApplyTemplateProjectMap;
@property (retain, nonatomic) NSString *initialPicTemplateId;
@property (retain, nonatomic) NSString *initialPicTemplateCategoryId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)videoCoverType;
- (BOOL)canApplyAgainWithPicTemplate:(id)a0;
- (void)fetchPanelCategoriesWithCompletion:(id /* block */)a0;
- (void)fetchCategoryPicTemplatesWithCategory:(id)a0 completion:(id /* block */)a1;
- (void)preFetchNeighbourCategoriesWithIndex:(long long)a0;
- (void)preDownloadNeihbourTemplateWithIndex:(long long)a0;
- (void)preDownloadPicTemplateWith:(id)a0;
- (void)cacheCurProjectTemplate:(id)a0;
- (id)projectTemplateIndexPath;
- (long long)indexOfCurTemplateModel;
- (id)getOriginTemplateMap;
- (BOOL)hasChangedTemplate;
- (long long)totalTemplateCount;
- (id)findTemplateWithId:(id)a0 categoryId:(id)a1;
- (BOOL)isLoadingAIGCTemplate:(id)a0;
- (void)clearCachedCategoryModels;
- (id)initWithServiceProvider:(id)a0 publishViewModel:(id)a1;
- (void)cacheOriginProjectUUIDs;
- (void)cacheOriginTemplateIds;
- (void)fetchInitialCategoryTemplateWithCompletion:(id /* block */)a0;
- (void)fetchCategoryPicTemplatesWithCategory:(id)a0 repository:(id)a1 completion:(id /* block */)a2;
- (id)applyScene;
- (id)indexPathTemplateLocatedAtFirstCategory:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)initialIndexPath;

@end
