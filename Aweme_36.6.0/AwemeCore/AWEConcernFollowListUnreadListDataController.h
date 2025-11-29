@class NSString, NSArray, NSMutableDictionary, NSDictionary, NSMutableArray, UIViewController;
@protocol AWEConcernRecentUpdateUnreadListPageHandlerProtocol;

@interface AWEConcernFollowListUnreadListDataController : AWEListDataController <AWEConcernFollowListUnreadListDataControllerProtocol>

@property (copy, nonatomic) NSString *userID;
@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) long long loadStyle;
@property (copy, nonatomic) NSArray *currentUserAllUnreadVideoIDs;
@property (nonatomic) unsigned long long currentUserOffset;
@property (weak, nonatomic) id<AWEConcernRecentUpdateUnreadListPageHandlerProtocol> pageHandler;
@property (copy, nonatomic) NSString *loadmoreUserID;
@property (nonatomic) unsigned long long loadmoreOffsetOfUser;
@property (copy, nonatomic) NSArray *loadMoreUserUnreadVideoIDs;
@property (copy, nonatomic) NSString *previousUserID;
@property (nonatomic) unsigned long long previousOffsetOfUser;
@property (copy, nonatomic) NSArray *previousUserUnreadVideoIDs;
@property (retain, nonatomic) NSMutableDictionary *allRequestValidItemsDic;
@property (nonatomic) unsigned long long emptyRefreshMaxCount;
@property (nonatomic) unsigned long long enterFrom;
@property (retain, nonatomic) NSMutableArray *unreadUserIDListCache;
@property (copy, nonatomic) id /* block */ allRequestValidItemsChanged;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (void)refreshWithCompletionInternal_:(id /* block */)a0;
- (void)updateCurrentRequestToNewUserID:(id)a0 offset:(unsigned long long)a1 isPrevious:(BOOL)a2;
- (id)allUnreadUserIDList;
- (void)trackForAccuracyWithAwemeList:(id)a0;
- (void)loadDataWithCompletion:(id /* block */)a0 pullType:(long long)a1 isPrevious:(BOOL)a2;
- (void)getRequestVideoIDsFailedHandle;
- (void)getRequestVideoIDsInvalidHandleWithIsPrevious:(BOOL)a0;
- (id)insetEmptyModelWithIsPrevious:(BOOL)a0 targetUserID:(id)a1 pullType:(long long)a2;
- (void)updateStatusWhenFetchDataFinishWithIsPrevious:(BOOL)a0 requestIDList:(id)a1;
- (void)requestCommonHandleIsStart:(BOOL)a0 pullType:(long long)a1 isPrevious:(BOOL)a2;
- (void)trackAccuracyCheckWithTargetCount:(long long)a0 actualCount:(long long)a1;
- (BOOL)canInsertEmptyModelWhenFetchDataFinishIfNeededWithIsPrevious:(BOOL)a0 targetUserID:(id)a1 videoArrayList:(id)a2;
- (void)uploadItemsNotExistIfNeedWithTargetUserID:(id)a0 requestVideoIDs:(id)a1 responseItems:(id)a2 completion:(id /* block */)a3;
- (void)forceGetRequestVideoIDsWithIsPrevious:(BOOL)a0 pullType:(long long)a1 completion:(id /* block */)a2;
- (void)getRequestVideoIDsWithIsPrevious:(BOOL)a0 pullType:(long long)a1 completion:(id /* block */)a2;
- (void)fetchMoreUserIfNeededWithCompletion:(id /* block */)a0;
- (void)updateLoadMoreOrPreviousWithHasStatus:(BOOL)a0 isPrevious:(BOOL)a1;
- (id)allRequestValidItemsWithUser:(id)a0;
- (id)initWithUserID:(id)a0 enterFrom:(unsigned long long)a1 pageHandler:(id)a2 viewController:(id)a3;
- (id)initWithUserID:(id)a0 viewController:(id)a1;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
