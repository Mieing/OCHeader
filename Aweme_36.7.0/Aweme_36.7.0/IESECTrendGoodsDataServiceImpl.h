@class NSString, IESECTrendGoodsVideoManager, NSDictionary, UICollectionView, NSMutableArray;

@interface IESECTrendGoodsDataServiceImpl : NSObject <AWEAwemeDetailTableViewControllerDelegate, IESECTrendGoodsVideoManagerProtocol, AWEZoomTransitionOuterContextProvider, IESECTrendGoodsDataService>

@property (retain, nonatomic) IESECTrendGoodsVideoManager *dataManager;
@property (nonatomic) long long indexOfCurrentSelectedVideoCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;
@property (weak, nonatomic) UICollectionView *mainCollection;
@property (copy, nonatomic) NSDictionary *extraDictionary;
@property (nonatomic) BOOL loadmoreHasMore;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (readonly, copy, nonatomic) NSString *requestID;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)detailTableViewController:(id)a0 scrollDidEndAtIndexPath:(id)a1 model:(id)a2;
- (id)initWithAwemeID:(id)a0 sceneType:(id)a1 labelName:(id)a2;
- (void)addFeedBackParams:(id)a0 index:(long long)a1;
- (void)firstLoadWithCompletionHandler:(id /* block */)a0;
- (void)mainFeedLoadMoreData:(id)a0 items:(id)a1;
- (void)enterVideoFeedWithAwemeID:(id)a0 index:(long long)a1;
- (void).cxx_destruct;

@end
