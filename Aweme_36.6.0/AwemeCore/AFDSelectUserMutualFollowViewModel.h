@class NSMutableDictionary, NSString, NSMutableSet, NSArray, NSMutableArray;

@interface AFDSelectUserMutualFollowViewModel : NSObject <AFDSelectUserViewModelProtocol>

@property (nonatomic) unsigned long long currentDataType;
@property (nonatomic) BOOL isRequestOnAir;
@property (retain, nonatomic) NSMutableArray *topSelectedCellViewModels;
@property (retain, nonatomic) NSMutableArray *friendCellViewModels;
@property (retain, nonatomic) NSMutableSet *allUserIDsSet;
@property (retain, nonatomic) NSMutableSet *selectedUserIDsSet;
@property (retain, nonatomic) NSMutableSet *userSelectIDsSet;
@property (retain, nonatomic) NSMutableSet *userUnSelectIDsSet;
@property (retain, nonatomic) NSMutableDictionary *activeCache;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) unsigned long long limit;
@property (copy, nonatomic) NSString *limitToastDesc;
@property (copy, nonatomic) NSString *searchSource;
@property (copy, nonatomic) NSString *searchBusinessID;
@property (copy, nonatomic) NSArray *lastSelectedUsers;
@property (nonatomic) BOOL defaultSelected;
@property (copy, nonatomic) id /* block */ filterIllegalDataBlock;
@property (copy, nonatomic) id /* block */ sortBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sectionViewModels;
- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (void)refreshDataWithCompletion:(id /* block */)a0;
- (BOOL)isEmptyData;
- (void)setupLastSelectedItemsWithUsers:(id)a0;
- (void)sortUsers:(id)a0 completeHandler:(id /* block */)a1;
- (BOOL)filterIllegalUser:(id)a0;
- (BOOL)isSelectedWithViewModel:(id)a0;
- (void)cacheSelectUser:(id)a0;
- (void)p_topSelectedSearchResultWithViewModel:(id)a0;
- (void)cacheUnSelectUser:(id)a0;
- (void)clearCacheForTopUsers;
- (void)recoverUserSelectForTopUsers;
- (void)setupLastSelectedItemsWithUsers:(id)a0 isNeedSort:(BOOL)a1 completeHandler:(id /* block */)a2;
- (id)selectedUserModels;
- (id)unSelectedUserModels;
- (BOOL)canSelectedItemWithViewModel:(id)a0;
- (BOOL)selectedItemWithViewModel:(id)a0 fromSearch:(BOOL)a1;
- (void)addDataSourceWithType:(unsigned long long)a0 dataList:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)allUserCount;
- (void)userOnlineWithSecUserID:(id)a0 completeHandler:(id /* block */)a1;
- (BOOL)isUnSelectedWithViewModel:(id)a0;
- (unsigned long long)unSelectedCount;
- (void)clearCacheForFriends:(BOOL)a0;
- (void)p_fetchBidirectionalFriendsDataWithCompletion:(id /* block */)a0;
- (void)recoverUserSelectForFriends:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (unsigned long long)selectedCount;

@end
