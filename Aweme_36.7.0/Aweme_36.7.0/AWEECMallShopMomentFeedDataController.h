@class NSString;

@interface AWEECMallShopMomentFeedDataController : AWEListDataController <AWEECMallShopMomentFeedListProtocol>

@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSString *entranceItemID;
@property (copy, nonatomic) NSString *entrancePage;
@property (copy, nonatomic) NSString *missItemID;
@property (copy, nonatomic) NSString *missToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)requestNextPageWithParams:(id)a0 completion:(id /* block */)a1;
- (void)fetchAwemeListWithParameters:(id)a0 completion:(id /* block */)a1;
- (long long)listDataCount;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
