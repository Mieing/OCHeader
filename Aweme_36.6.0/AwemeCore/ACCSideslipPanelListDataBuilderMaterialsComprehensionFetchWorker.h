@class ACCSideslipPanelMaterialsComprehensionRequestState, NSMutableDictionary, ACCGenericTemplateListFetcher;
@protocol ACCSideslipPropService, ACCSideslipGenericTemplateService, ACCEditSpecialEffectServiceProtocol;

@interface ACCSideslipPanelListDataBuilderMaterialsComprehensionFetchWorker : ACCSideslipPanelListDataBuilderBaseWorker

@property (copy, nonatomic) id /* block */ composeDataCompletion;
@property (retain, nonatomic) NSMutableDictionary *propPickDic;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCSideslipGenericTemplateService> templateService;
@property (weak, nonatomic) id<ACCEditSpecialEffectServiceProtocol> specialEffectService;
@property (retain, nonatomic) ACCGenericTemplateListFetcher *listFetcher;
@property (retain, nonatomic) ACCSideslipPanelMaterialsComprehensionRequestState *materialsComprehensionRequestState;
@property (copy, nonatomic) id /* block */ getTotalListBlk;
@property (copy, nonatomic) id /* block */ canUpdateDataFormAIRecommend;
@property (copy, nonatomic) id /* block */ getMaxCountBlk;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } needReplaceRange;

- (id)totalList;
- (void)fetchListInNewProcedure;
- (id)filterWithCellModel:(id)a0;
- (unsigned long long)workerScene;
- (void)composeListDataWithPropPickDic:(id)a0 completion:(id /* block */)a1;
- (void)composeDataWithError:(id)a0;
- (long long)maxPlaceholderCountForNeedUpdate;
- (double)waitingTimeForNeedUpdate;
- (void)updateTotalListForAIRecommend;
- (void)updateTotalListWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 genericTemplateList:(id)a1;
- (BOOL)isValidRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;

@end
