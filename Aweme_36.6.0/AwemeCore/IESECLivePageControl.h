@class IESECLiveGoodsViewModel, NSString, NSArray, NSMutableDictionary, NSMutableArray, IESECLiveLoadingState, IESECLiveGoodsListPageModel;
@protocol IESECLiveListGoodsModelsControlDelegate;

@interface IESECLivePageControl : NSObject

@property (retain, nonatomic) NSString *uniqueKey;
@property (retain, nonatomic) NSMutableArray *deduplicatedGoodsArray;
@property (retain, nonatomic) NSMutableDictionary *pageDic;
@property (retain, nonatomic) NSMutableDictionary *originPageDic;
@property (retain, nonatomic) IESECLiveGoodsViewModel *introducingGoodsViewModel;
@property (retain, nonatomic) IESECLiveGoodsViewModel *relatedInfoGoodsViewModel;
@property (retain, nonatomic) NSArray *targetFlashGoodsViewModels;
@property (retain, nonatomic) NSArray *recommendGoodsViewModels;
@property (nonatomic) long long nextOffset;
@property (nonatomic) long long maxPageNum;
@property (retain, nonatomic) IESECLivePageControl *oldPageControl;
@property (weak, nonatomic) id<IESECLiveListGoodsModelsControlDelegate> delegate;
@property (readonly, nonatomic) IESECLiveGoodsListPageModel *firstPageModel;
@property (readonly, nonatomic) NSMutableArray *goodsViewModels;
@property (nonatomic) long long requestingPage;
@property (nonatomic) BOOL disableLoadPreviousPage;
@property (retain, nonatomic) IESECLiveLoadingState *loadingState;

- (BOOL)hasPreviousPage;
- (long long)indexInPageFromRealIndex:(long long)a0;
- (void)enumAllExistedViewModelUsingBlock:(id /* block */)a0;
- (void)updateLoadingType:(long long)a0 toState:(long long)a1;
- (long long)previousPageToLoadWithRealIndex:(long long)a0 realOrderInList:(long long)a1;
- (long long)nextPageToLoadWithRealIndex:(long long)a0 realOrderInList:(long long)a1;
- (void)setRelatedInfoGoodsModel:(id)a0;
- (void)updateFirstPageModelGoodsListWithGoodsModel:(id)a0;
- (id)pageNumFromRealIndex:(long long)a0;
- (id)goodsModelsAtPage:(id)a0;
- (id)goodsModelsBeforePage:(id)a0;
- (void)setIntroducingGoodsModel:(id)a0;
- (void)setTargetFlashGoodsModels:(id)a0;
- (void)setRecommendGoodsModels:(id)a0;
- (void)updateAllExplainStatus;
- (void)refreshFirstPageGoodsViewModelsWithUpdateExtraInfo:(id)a0;
- (id)goodsViewModelsFromGoodsModels:(id)a0 oldGoodsViewModels:(id)a1;
- (id)goodsViewModelFromGoodsModel:(id)a0 oldGoodsViewModel:(id)a1;
- (void)refreshFirstPageGoodsViewModels;
- (void)updateExplainStatusForViewModel:(id)a0;
- (void)updatePageModel:(id)a0 atPage:(id)a1 updateExtraInfo:(id)a2;
- (id)sortPageDic;
- (id)storeOriginPageDic:(id)a0 forPage:(id)a1;
- (void)updateFirstPageModel:(id)a0 updateExtraInfo:(id)a1;
- (void)updatePage:(id)a0 forKey:(id)a1 updateExtraInfo:(id)a2;
- (void)beginTransformFromOldPageControl:(id)a0 actionBlock:(id /* block */)a1;
- (id)p_goodsViewModelFromGoodsModel:(id)a0;
- (void)updateIntroducingGoodsModel:(id)a0;
- (id)goodsViewModelFromGoodsModel:(id)a0;
- (void)updatePageModel:(id)a0 atPage:(id)a1;
- (long long)p_isDuplicateIntroducingGoodsModel;
- (id)p_goodsViewModelsFromGoodsModels:(id)a0;
- (void)updatePage:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasNextPage;

@end
