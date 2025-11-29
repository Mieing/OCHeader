@class IESECLiveGoodsBaseModel, NSMutableDictionary, NSArray, IESECLivePageControl, IESECLiveGoodsViewModel;
@protocol IESECLiveListGoodsModelsControlDelegate;

@interface IESECLiveListGoodsModelsControl : NSObject

@property (retain, nonatomic) NSMutableDictionary *pageControlManager;
@property (retain, nonatomic) IESECLiveGoodsBaseModel *introducingGoodsModel;
@property (retain, nonatomic) IESECLiveGoodsViewModel *introducingGoodsViewModel;
@property (weak, nonatomic) id<IESECLiveListGoodsModelsControlDelegate> delegate;
@property (readonly, nonatomic) NSArray *allGoodsViewModels;
@property (readonly, nonatomic) NSArray *allExistGoodsModels;
@property (readonly, nonatomic) NSArray *allGoodsViewModelsExceptIntroducing;
@property (nonatomic) long long selectedTabIndex;
@property (retain, nonatomic) NSArray *tabs;
@property (readonly, nonatomic) IESECLivePageControl *currentPageControl;

- (void)enumAllExistedViewModelUsingBlock:(id /* block */)a0;
- (id)pageControlWithIndex:(long long)a0;
- (void)disableDataWithUniqueKey:(id)a0;
- (id)pageControlWithTabUniqueKey:(id)a0;
- (id)allPageControl;
- (void)setupNewList:(id)a0 page:(id)a1;
- (void)updatePageControlWithUniqueKey:(id)a0 pageModel:(id)a1 page:(id)a2;
- (void)setupNewList:(id)a0 uniqueIndex:(id)a1 page:(id)a2;
- (id)tabUniqueKeyAtIndex:(long long)a0;
- (BOOL)dataValidWithUniqueKey:(id)a0;
- (void)updatePageControlWithUniqueKey:(id)a0 pageModel:(id)a1 page:(id)a2 updateExtraInfo:(id)a3;
- (id)pageControlWithTabUniqueKey:(id)a0 createIfNotExisted:(BOOL)a1;
- (void)updateIntroducingGoodsModel:(id)a0 belongsTabModels:(id)a1;
- (void)disablePageDataExcept:(id)a0;
- (void)clearPageDataExcept:(id)a0;
- (id)p_goodsViewModelFromGoodsModel:(id)a0;
- (id)p_goodsViewModelsFromGoodsModels:(id)a0;
- (void)p_updateIntroducingGoodsModel:(id)a0;
- (id)tabUniqueKey:(id)a0;
- (void)p_calculateFirstPageForUniqueKey:(id)a0 pageModel:(id)a1;
- (void)p_updateExplainStatusForGoodsViewModels:(id)a0;
- (id)p_validGoodsViewModelsForFirstPage:(id)a0 uniqueKey:(id)a1;
- (void)updatePageControlWithUniqueKey:(id)a0 pageModel:(id)a1 page:(id)a2 goodsViewModels:(id)a3 updateExtraInfo:(id)a4;
- (void)p_calculateFirstPageForUniqueKey:(id)a0 pageModel:(id)a1 updateExtraInfo:(id)a2;
- (void)updateIntroducingViewModel:(id)a0;
- (void)updatePageControlWithUniqueKey:(id)a0 pageModel:(id)a1 page:(id)a2 goodsViewModels:(id)a3;
- (id)goodsModelsWithPromotionIDs:(id)a0 fromGoodsModels:(id)a1;
- (id)p_deduplicateGoodsModels:(id)a0 originGoodsModels:(id)a1 topCount:(long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
