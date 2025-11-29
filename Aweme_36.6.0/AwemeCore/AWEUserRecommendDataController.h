@class NSString, NSArray, NSSet, NSMutableDictionary, AWEUserStatusSynchronizer, NSDictionary, NSMutableArray, NSMutableSet, AWERecommendInsertUsersModel;

@interface AWEUserRecommendDataController : NSObject <AWEUserMessage, AWEUserRecommendDataControllerProtocol>

@property (nonatomic) long long cursor;
@property (nonatomic) long long newUserCount;
@property (retain, nonatomic) NSMutableDictionary *recommendUserExtraInfo;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *requestId;
@property (retain, nonatomic) AWERecommendInsertUsersModel *insertUsersModel;
@property (nonatomic) BOOL isFromHighValueUserSource;
@property (copy, nonatomic) NSSet *recNewUserIDs;
@property (nonatomic) long long impressionIndex;
@property (retain, nonatomic) NSMutableSet *fetchedUsersIDs;
@property (retain, nonatomic) AWEUserStatusSynchronizer *userStatusSynchronizer;
@property (nonatomic) BOOL isRequestOnAir;
@property (retain, nonatomic) NSMutableArray *mutableUserList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long firstPageCount;
@property (nonatomic) unsigned long long pageCount;
@property (copy, nonatomic) NSString *targetUserID;
@property (copy, nonatomic) NSString *targetUserNickname;
@property (copy, nonatomic) NSString *insertedTopUIDs;
@property (copy, nonatomic) NSString *filteredIDs;
@property (nonatomic) BOOL needUserExtra;
@property (nonatomic) BOOL needShowStory24;
@property (nonatomic) long long newRecommendCountSource;
@property (nonatomic) BOOL useNewRecommendCountUsers;
@property (copy, nonatomic) NSDictionary *loadMoreExtraParams;
@property (readonly, copy, nonatomic) NSArray *userList;
@property (copy, nonatomic) NSString *enterFrom;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)refreshWithNetworkTag:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)URLForNetworkService;
- (void)configHasMore:(BOOL)a0;
- (BOOL)p_shouldBlockRefresh;
- (id)p_createNetworkRequest:(BOOL)a0 networkTag:(unsigned long long)a1;
- (void)p_monitorResponseIsEmpty:(BOOL)a0;
- (void)p_trackResponseWithSuccess:(BOOL)a0 count:(long long)a1 isLoadMore:(BOOL)a2 requestTime:(double)a3;
- (id)p_userIDsFromUserList:(id)a0 count:(long long)a1;
- (id)p_filterUserList:(id)a0;
- (void)p_appendUsersToDataSource:(id)a0;
- (void)p_finishRequestSuccess:(BOOL)a0 userList:(id)a1 isLoadMore:(BOOL)a2 requestTime:(double)a3;
- (id)paramsForNetworkService:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)reset;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
