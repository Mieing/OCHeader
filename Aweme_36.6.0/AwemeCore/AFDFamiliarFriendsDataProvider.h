@class NSArray, NSMutableDictionary, NSString, NSMutableArray, NSNumber;

@interface AFDFamiliarFriendsDataProvider : NSObject <AFDFamiliarFriendsDataProviderProtocol>

@property (retain, nonatomic) NSMutableArray *friendsList;
@property (retain, nonatomic) NSArray *storageFriendIDList;
@property (retain, nonatomic) NSMutableDictionary *friendDictionary;
@property (retain, nonatomic) NSMutableDictionary *userDictionary;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long total;
@property (nonatomic) BOOL totalAccurate;
@property (copy, nonatomic) NSNumber *recommendType;
@property (nonatomic) long long count;
@property (nonatomic) BOOL isRequestFriendsListOnAir;
@property (copy, nonatomic) NSString *hotsoonText;
@property (nonatomic) long long vcdCount;
@property (nonatomic) long long hotsoonHasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchAccurateDataFromLocalDataWithOrderType:(long long)a0 completion:(id /* block */)a1;
- (void)constructDataSourceFromArray:(id)a0 isLoadMore:(BOOL)a1;
- (BOOL)isNumberFirst:(id)a0;
- (void)sortedDataFromArray:(id)a0;
- (id)currentUserStorageKey:(id)a0;
- (void)fetchLocalDataWithOrderType:(long long)a0;
- (void)getAndCheckFriendUserListWithFriendIDList:(id)a0 closeFriendsIDList:(id)a1 isAffinity:(BOOL)a2 completion:(id /* block */)a3;
- (void)refreshWithNeedAllFriend:(BOOL)a0 orderType:(long long)a1 completion:(id /* block */)a2;
- (void)updateFriendListWithFriendIDList:(id)a0 lostFriendIDs:(id)a1 enableAffinity:(BOOL)a2 completion:(id /* block */)a3;
- (id)friendsUrl;
- (id)paramsWithCount:(long long)a0 orderType:(long long)a1;
- (void)monitorFamiliarListResponseWithType:(long long)a0 isSuccess:(BOOL)a1 count:(long long)a2;
- (void)updateWithFamiliarModel:(id)a0 orderType:(long long)a1 isLoadMore:(BOOL)a2;
- (id)filterDuplicatedDatasourceWithArray:(id)a0;
- (id)friendsUserList;
- (void)loadMoreWithOrderType:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
