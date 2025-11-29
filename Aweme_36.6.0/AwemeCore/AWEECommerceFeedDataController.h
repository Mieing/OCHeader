@class NSArray, NSString, NSDictionary, AWEAwemeModel;
@protocol AWEECFeedListDelegate;

@interface AWEECommerceFeedDataController : AWEListDataController <AWEECFeedListProtocol>

@property (copy, nonatomic) NSArray *pendingAwemeList;
@property (nonatomic) long long pageNum;
@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSString *apiPathString;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) AWEAwemeModel *preLoadModel;
@property (nonatomic) BOOL waitingFirstItem;
@property (nonatomic) BOOL removeDataAfterRequestCallback;
@property (nonatomic) BOOL isMallPlayer;
@property (weak, nonatomic) id<AWEECFeedListDelegate> feedListDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)requestNextPageWithCompletion:(id /* block */)a0;
- (void)fetchAwemeListWithParameters:(id)a0 completion:(id /* block */)a1;
- (long long)listDataCount;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
