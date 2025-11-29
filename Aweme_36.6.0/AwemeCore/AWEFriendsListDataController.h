@class NSNumber, NSString;

@interface AWEFriendsListDataController : AWEListDataController <AWEFriendsListDataControllerProtocol>

@property (nonatomic) long long count;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isFetchNumber;
@property (copy, nonatomic) NSString *hotsoonText;
@property (nonatomic) long long vcdCount;
@property (nonatomic) long long hotsoonHasMore;
@property (nonatomic) long long total;
@property (nonatomic) BOOL totalAccurate;
@property (copy, nonatomic) NSNumber *recommendType;
@property (nonatomic) BOOL useServerSorted;
@property (nonatomic) BOOL disableCacheCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)refreshAllFriendWithCompletion:(id /* block */)a0;
- (void)constructDataSourceFromArray:(id)a0 isLoadMore:(BOOL)a1;
- (BOOL)isNumberFirst:(id)a0;
- (void)sortedDataFromArray:(id)a0;
- (id)friendsUrl;
- (void)monitorFamiliarListResponseWithType:(long long)a0 isSuccess:(BOOL)a1 count:(long long)a2;
- (id)filterDuplicatedDatasourceWithArray:(id)a0;
- (void)useServerSortedWithIsFetchNumber:(BOOL)a0;
- (void)refreshWithNeedAllFriend:(BOOL)a0 completion:(id /* block */)a1;
- (id)paramsWithCount:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCount:(long long)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
