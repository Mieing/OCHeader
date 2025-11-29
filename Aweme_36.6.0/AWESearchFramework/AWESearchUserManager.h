@class AWEDiscoverySearchExtraModel, NSString, NSDictionary, NSMutableArray, AWESearchDynamicPreLayoutManager;
@protocol AWEHttpTask;

@interface AWESearchUserManager : AWESearchBaseManager <AFDSearchUserManagerProtocol>

@property (weak, nonatomic) id<AWEHttpTask> task;
@property (copy, nonatomic) NSString *riskWarningText;
@property (copy, nonatomic) NSString *plainText;
@property (copy, nonatomic) NSString *highlightText;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWESearchDynamicPreLayoutManager *preLayoutManager;
@property (nonatomic) BOOL showEgg;
@property (copy, nonatomic) NSString *searchSource;
@property (retain, nonatomic) NSMutableArray *userArray;
@property (nonatomic) long long newCount;
@property (nonatomic) BOOL isFromNearby;
@property (copy, nonatomic) NSString *gid;
@property (copy, nonatomic) NSString *preGeneralSearchID;
@property (copy, nonatomic) NSString *initialGeneralSearchID;
@property (copy, nonatomic) NSString *currentLogId;
@property (copy, nonatomic) NSDictionary *searchExtraParams;
@property (copy, nonatomic) NSDictionary *filterParams;
@property (nonatomic) BOOL isFilterSearch;
@property (copy, nonatomic) NSDictionary *extraRequestParams;
@property (retain, nonatomic) AWEDiscoverySearchExtraModel *extraModel;
@property (copy, nonatomic) id /* block */ beforeBuildRequestBlock;
@property (nonatomic) BOOL isRecommend;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *keyWord;
@property (nonatomic) BOOL fromHotSearch;
@property (copy, nonatomic) NSString *initialSearchSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unfollowUser:(id)a0 completion:(id /* block */)a1;
- (void)p_handleRefreshServerTimeCost:(id)a0;
- (void)loadMoreUser:(id /* block */)a0;
- (void)searchUserWithKeyword:(id)a0 isPullToRefresh:(BOOL)a1 completion:(id /* block */)a2;
- (void)searchUserWithKeyword:(id)a0 completionWithKeyword:(id /* block */)a1;
- (void)followUser:(id)a0 needMarkFriends:(BOOL)a1 channelID:(long long)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (void)unfollowUser:(id)a0 channelID:(long long)a1 completion:(id /* block */)a2;
- (void)registerPreprocessClass:(Class)a0;
- (BOOL)shouldUseAnnieXWithdynamicPatchModel:(id)a0;
- (id)p_searchTokenParamsWithKeyword:(id)a0;
- (void)p_fetchUsersWithKeyword:(id)a0 cursor:(id)a1 isPullToRefresh:(BOOL)a2 completion:(id /* block */)a3;
- (void)p_searchUserWithKeyword:(id)a0 isPullToRefresh:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchUsersWithKeyword:(id)a0 cursor:(id)a1 isPullToRefresh:(BOOL)a2 completion:(id /* block */)a3;
- (void)followUser:(id)a0 needMarkFriends:(BOOL)a1 channelID:(long long)a2 completion:(id /* block */)a3;
- (void)fetchPugnaRecommendUser:(id /* block */)a0;
- (void)followUser:(id)a0 needMarkFriends:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
