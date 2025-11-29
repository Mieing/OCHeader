@class AWEFollowRecentUserUnreadListDataController, NSArray, NSString, AWEUserModel;

@interface AWEFollowNoListUserPageHandler : NSObject <AWEConcernRecentUpdateUnreadListPageHandlerProtocol>

@property (retain, nonatomic) AWEUserModel *entryUser;
@property (retain, nonatomic) AWEFollowRecentUserUnreadListDataController *recentUserDataController;
@property (copy, nonatomic) NSArray *currentUnreadUserIDList;
@property (copy, nonatomic) NSArray *userList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshCurrentUnreadUserIDListWithCompletion:(id /* block */)a0;
- (BOOL)noMoreUserData;
- (void)loadMoreUnreadUserWithCompletion:(id /* block */)a0;
- (id)userModelWithUserID:(id)a0;
- (id)initWithEntryUser:(id)a0;
- (Class)emptyCellClass;
- (void)cacheUnreadItemsIfNeededWithFollowingUser:(id)a0;
- (void).cxx_destruct;

@end
