@class NSString, NSMutableDictionary, NSArray, NSDictionary, UIViewController;
@protocol AWELeftSideBarRevisitUserListPageHandlerProtocol;

@interface AWELeftSideBarRevisitUserListDataController : AWEListDataController <AWELeftSideBarRevisitUserListDataControllerProtocol>

@property (copy, nonatomic) NSString *userID;
@property (nonatomic) BOOL shouldShowLatestVideo;
@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) unsigned long long emptyRefreshMaxCount;
@property (weak, nonatomic) id<AWELeftSideBarRevisitUserListPageHandlerProtocol> pageHandler;
@property (retain, nonatomic) NSMutableDictionary *allRequestValidItemsDic;
@property (copy, nonatomic) NSString *loadmoreUserID;
@property (nonatomic) unsigned long long loadmoreOffsetOfUser;
@property (copy, nonatomic) NSArray *loadMoreUserUnreadVideoIDs;
@property (copy, nonatomic) NSString *previousUserID;
@property (nonatomic) unsigned long long previousOffsetOfUser;
@property (copy, nonatomic) NSArray *previousUserUnreadVideoIDs;
@property (copy, nonatomic) id /* block */ allRequestValidItemsChanged;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (void)updateCurrentRequestToNewUserID:(id)a0 offset:(unsigned long long)a1 isPrevious:(BOOL)a2;
- (void)loadDataWithCompletion:(id /* block */)a0 pullType:(long long)a1 isPrevious:(BOOL)a2;
- (void)getRequestVideoIDsFailedHandle;
- (void)getRequestVideoIDsInvalidHandleWithIsPrevious:(BOOL)a0;
- (id)insetEmptyModelWithIsPrevious:(BOOL)a0 targetUserID:(id)a1 pullType:(long long)a2;
- (void)updateStatusWhenFetchDataFinishWithIsPrevious:(BOOL)a0 requestIDList:(id)a1;
- (void)requestCommonHandleIsStart:(BOOL)a0 pullType:(long long)a1 isPrevious:(BOOL)a2;
- (BOOL)canInsertEmptyModelWhenFetchDataFinishIfNeededWithIsPrevious:(BOOL)a0 targetUserID:(id)a1 videoArrayList:(id)a2;
- (void)uploadItemsNotExistIfNeedWithTargetUserID:(id)a0 requestVideoIDs:(id)a1 responseItems:(id)a2 completion:(id /* block */)a3;
- (void)forceGetRequestVideoIDsWithIsPrevious:(BOOL)a0 pullType:(long long)a1 completion:(id /* block */)a2;
- (void)getRequestVideoIDsWithIsPrevious:(BOOL)a0 pullType:(long long)a1 completion:(id /* block */)a2;
- (void)fetchMoreUserIfNeededWithCompletion:(id /* block */)a0;
- (void)updateLoadMoreOrPreviousWithHasStatus:(BOOL)a0 isPrevious:(BOOL)a1;
- (id)allRequestValidItemsWithUser:(id)a0;
- (id)initWithUserID:(id)a0 enterFrom:(id)a1 latestVideo:(BOOL)a2 pageHandler:(id)a3 viewController:(id)a4;
- (void)loadLastVideoWithCompletion:(id /* block */)a0 pullType:(long long)a1 isPrevious:(BOOL)a2 targetUserID:(id)a3;
- (id)getCurrentSource;
- (void)handelResponseWithCompletion:(id /* block */)a0 pullType:(long long)a1 isPrevious:(BOOL)a2 model:(id)a3 error:(id)a4 targetUserID:(id)a5 requestVideoIDs:(id)a6 requestLastVideo:(BOOL)a7;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
