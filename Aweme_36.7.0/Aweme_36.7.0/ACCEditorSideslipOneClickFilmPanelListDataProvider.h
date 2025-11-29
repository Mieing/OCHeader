@class ACCSideslipPanelListDataBuilderGenericTemplateFetchWorker, NSArray, NSString, ACCSideslipPanelListDataBuilder, ACCSideslipPanelListDataBuilderSyncFromMainPanelWorker, NSMutableDictionary, ACCGenericTemplateListFetcher, ACCSideslipPanelListDataBuilderEffectFocusAppendWorker;
@protocol ACCSideslipGenericTemplateService, ACCSideslipPropInternalService, ACCSideslipPropPanelDownloadService, ACCEditSpecialEffectServiceProtocol, ACCSideslipPropPanelService, ACCEditOneClickFilmPanelServiceProtocol, ACCEditorOneClickFilmListFetchService, ACCEditorOneClickFilmService;

@interface ACCEditorSideslipOneClickFilmPanelListDataProvider : ACCEditorSideslipPanelBaseListDataProvider <ACCSideslipPanelListDataBuilderDelegate>

@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropInternalService> sideslipPropInternalService;
@property (weak, nonatomic) id<ACCSideslipPropPanelDownloadService> sideslipPropDownloadService;
@property (weak, nonatomic) id<ACCSideslipGenericTemplateService> templateService;
@property (weak, nonatomic) id<ACCEditSpecialEffectServiceProtocol> specialEffectService;
@property (weak, nonatomic) id<ACCEditOneClickFilmPanelServiceProtocol> genericPanelService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmListFetchService> oneClickFilmFetchListService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmService> oneClickFilmService;
@property (nonatomic) BOOL mvDataFiltered;
@property (nonatomic) BOOL needFilterImageOnlyTemplates;
@property (nonatomic) BOOL shouldHideMoreIcon;
@property (nonatomic) unsigned long long firstFetchEffectShowCount;
@property (nonatomic) long long supportSlideEffectCount;
@property (retain, nonatomic) ACCGenericTemplateListFetcher *genericTemplateListFetcher;
@property (retain, nonatomic) ACCSideslipPanelListDataBuilder *listDataBuilder;
@property (retain, nonatomic) ACCSideslipPanelListDataBuilderGenericTemplateFetchWorker *genericTemplatesFetchWorker;
@property (retain, nonatomic) ACCSideslipPanelListDataBuilderEffectFocusAppendWorker *focusAppendWorker;
@property (retain, nonatomic) ACCSideslipPanelListDataBuilderSyncFromMainPanelWorker *syncFromMainPanelWorker;
@property (retain, nonatomic) NSArray *toBeInsertedTemplateModels;
@property (retain, nonatomic) NSMutableDictionary *mutablePropPickCellModelDic;
@property (nonatomic) long long rightFirstIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)resetInitialFocusInfo;
- (id)commonRequestModel;
- (void)bindService;
- (BOOL)shouldHideMoreIconWhileLoading;
- (void)resetListData;
- (long long)insertIfNeededWithModel:(id)a0;
- (void)rebuildCellModelsWithTemplates:(id)a0;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)fetchCategoriesWithCompletion:(id /* block */)a0;
- (void)initState;
- (id)getCurrentRightDataCategory;
- (void)syncSideslipPanelStateAfterExitMainPanel:(id)a0;
- (void)filterImageOnlyTemplates;
- (long long)insertIfNeededWithModel:(id)a0 needInsertToOrigin:(BOOL)a1;
- (void)limitDisplayTotalListIfNeededWithCellModels:(id)a0;
- (void)fetchGeneralPostListWithCompletion:(id /* block */)a0;
- (void)fetchGenericTemplateWithCompletion:(id /* block */)a0;
- (id)buildCellModelsWithOneClickFilmListArray:(id)a0;
- (void)buildInitialCellModels:(id)a0;
- (void)resetInitialFocusInfoWithShouldLimitCount:(BOOL)a0;
- (void)predownloadGenericTemplateIfNeed:(id)a0;
- (id)currentTemplateModel;
- (id)filterWithCellModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
