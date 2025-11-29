@class NSString, NSDictionary, AWEAwemeModel, NSMutableArray;
@protocol AWEECFeedListDelegate;

@interface AWEECommerceMallFeedDetailDataController : AWEListDataController <AWEECFeedDetailListProtocol, AWEECFeedListProtocol>

@property (nonatomic) long long pageNum;
@property (nonatomic) long long pageCursor;
@property (retain, nonatomic) NSMutableArray *recFilters;
@property (copy, nonatomic) NSString *entrancePage;
@property (copy, nonatomic) NSDictionary *trackerParams;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *ids;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) AWEAwemeModel *preLoadModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL waitingFirstItem;
@property (nonatomic) BOOL removeDataAfterRequestCallback;
@property (nonatomic) BOOL isMallPlayer;
@property (weak, nonatomic) id<AWEECFeedListDelegate> feedListDelegate;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)requestMallPackWithParams:(id)a0 completion:(id /* block */)a1;
- (void)requestMallFeedWithParams:(id)a0 completion:(id /* block */)a1;
- (void)appendRecFilters:(id)a0;
- (void)requestMallPackWithExtParams:(id)a0 completion:(id /* block */)a1;
- (void)requestMallFeedWithExtParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
