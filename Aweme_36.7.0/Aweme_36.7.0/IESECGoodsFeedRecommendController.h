@class IESECFeedRecommendItemModel, NSMutableDictionary, IESECFeedRecommendDataController, NSString, UIView, IESECGoodsFeedContext, NSMutableArray;
@protocol IESECGoodsFeedContainerProtocol, IESECGoodsFeedOperationProtocol;

@interface IESECGoodsFeedRecommendController : NSObject <IESECGoodsFeedControllerProtocol, IESECGoodsFeedRecommendControllerProtocol>

@property (weak, nonatomic) IESECGoodsFeedContext *context;
@property (weak, nonatomic) UIView *rootView;
@property (weak, nonatomic) id<IESECGoodsFeedContainerProtocol> container;
@property (weak, nonatomic) id<IESECGoodsFeedOperationProtocol> goodsFeedListDelegate;
@property (retain, nonatomic) IESECFeedRecommendDataController *recommendDataController;
@property (nonatomic) BOOL isReturnFromOtherPages;
@property (retain, nonatomic) NSMutableDictionary *fullMetricsSnapshot;
@property (retain, nonatomic) NSMutableArray *searchProductIds;
@property (retain, nonatomic) NSMutableArray *searchCardShowIndexArray;
@property (nonatomic) long long searchCardFrequency;
@property (retain, nonatomic) NSMutableArray *compareDealsProductIds;
@property (retain, nonatomic) IESECFeedRecommendItemModel *compareDealsCardModel;
@property (retain, nonatomic) IESECFeedRecommendItemModel *searchCardModel;
@property (nonatomic) long long enterDetailCurrentIndex;
@property (nonatomic) long long sectionForDeduplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resourceItems;
- (void)requestGoodInternalFeedRecommendListWithRequest:(id)a0 metaParams:(id)a1 completion:(id /* block */)a2;
- (void)productCardUpdated;
- (void)enterDetailAtIndex:(long long)a0;
- (void)loadMoreRecommendGoods;
- (void)initRecommendDataController;
- (void)requestFirstPageRecommendList;
- (void)loadMoreRecommendGoodsWithFilterString:(id)a0;
- (void)shouldUpdateWindVane;
- (void)requestSearchCardAtIndex:(long long)a0;
- (void)requestCompareDealsCardAtIndex:(long long)a0;
- (void)updateFirstPageRecommendListWithResponse:(id)a0 error:(id)a1;
- (id)recommendFeedViewModelWithObjects:(id)a0 useToInsert:(BOOL)a1;
- (void)handleMoreData:(id)a0 error:(id)a1 statusCode:(id)a2;
- (BOOL)isLynxCardExistWithParentProductID:(id)a0;
- (void)loadRecommendGoodsFailedTrack:(id)a0 statusCode:(id)a1;
- (void)loadCollectionCards;
- (void)loadRecommendGoodsSucceededTrack;
- (void)requestRecommendListCompareDealsCard:(id)a0;
- (void)insertResourceCardIfNeededCompletion:(id /* block */)a0;
- (void)insertCompareDealsResourceCardViewIfNeed:(id)a0;
- (void)loadCompareDealsModelWithScene:(id)a0 productList:(id)a1 completion:(id /* block */)a2;
- (id)rawRecommendItems;
- (void)fetchMoreRecommendWithFilterString:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldRequestSearchCardWithIndex:(long long)a0;
- (void)insertRecommendListCompareDealsCard:(id)a0;
- (void)insertResourceItem:(id)a0 atIndex:(long long)a1 completion:(id /* block */)a2;
- (long long)firstResourceCardNumber;
- (BOOL)shouldDelete:(id)a0;
- (BOOL)hasMoreToLoad;
- (BOOL)hasNoRecommendation;
- (void)viewDidAppear;
- (void)initialized;
- (void).cxx_destruct;
- (void)removeElementsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)viewWillAppear;
- (void)setupController;

@end
