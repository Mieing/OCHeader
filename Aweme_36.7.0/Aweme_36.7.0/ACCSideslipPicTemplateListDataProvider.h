@class ACCSideslipPanelListDataBuilder, NSString, ACCSideslipPanelListDataBuilderPicTemplateFocusAppendWorker;
@protocol ACCEditSpecialEffectServiceProtocol, ACCSideslipPropPanelService, ACCEditPicTemplateServiceProtocol, ACCSideslipPropInternalService;

@interface ACCSideslipPicTemplateListDataProvider : ACCEditorSideslipPanelBaseListDataProvider <ACCSideslipPanelListDataBuilderDelegate>

@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropInternalService> sideslipPropInternalService;
@property (weak, nonatomic) id<ACCEditPicTemplateServiceProtocol> picTemplateService;
@property (weak, nonatomic) id<ACCEditSpecialEffectServiceProtocol> specialEffectService;
@property (retain, nonatomic) ACCSideslipPanelListDataBuilder *listDataBuilder;
@property (retain, nonatomic) ACCSideslipPanelListDataBuilderPicTemplateFocusAppendWorker *focusAppendWorker;
@property (nonatomic) long long rightFirstIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)resetInitialFocusInfo;
- (void)bindService;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)initState;
- (void)buildInitialCellModels:(id)a0;
- (id)cancelItemWorker;
- (id)filterWorker;
- (void)filterMultiSlotsPicTemplateFromTotalList;
- (void)updateListDatasWithCellModels:(id)a0;
- (id)insertFollowDataWorker;
- (id)listFetchWorker;
- (void).cxx_destruct;

@end
