@class AWEFollowRecentUserUnreadListDataController, NSString, AWEFollowRecentUserUpdateDataController, NSNumber;

@interface AWEFollowUserUpdateViewModel : AWERelationUserListBaseSectionViewModel <AWEUserMessage, AWEConcernFollowListUnreadCacheMessage, AWEConcernRecentUpdateUnreadListPageHandlerProtocol>

@property (retain, nonatomic) AWEFollowRecentUserUpdateDataController *dataController;
@property (retain, nonatomic) AWEFollowRecentUserUnreadListDataController *recentUserDataController;
@property (copy, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSNumber *totalUnreadItems;
@property (nonatomic) BOOL forceAllUnread;
@property (copy, nonatomic) NSString *insertIds;
@property (retain, nonatomic) NSNumber *firstFetched;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishTopFollowingUser:(id)a0 status:(long long)a1;
- (void)didFinishUnTopFollowingUser:(id)a0 status:(long long)a1;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishTapTAIsFriendWithUser:(id)a0 isFriend:(BOOL)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (id)enterFrom;
- (void)loadMoreSectionData;
- (unsigned long long)getEnterFrom;
- (void)registerMessage;
- (void)unfollowUser:(id)a0;
- (void)syncModelFollowStatus:(id)a0 status:(long long)a1;
- (void)onClickUnFollowUserOnProfileMenu:(id)a0 trackerParam:(id)a1;
- (BOOL)isFriends;
- (void)followListUnreadCacheDidChangeWithUserID:(id)a0 deleteItemIDs:(id)a1;
- (void)followListUnreadCacheDidReplaceWithUserID:(id)a0;
- (id)currentUnreadUserIDList;
- (BOOL)noMoreUserData;
- (void)loadMoreUnreadUserWithCompletion:(id /* block */)a0;
- (id)userModelWithUserID:(id)a0;
- (Class)emptyCellClass;
- (id)convertUserModel:(id)a0;
- (void)cacheUnreadItemsIfNeededWithFollowingUser:(id)a0;
- (void)configTrackDict:(id)a0;
- (void)forceUseAllUnread;
- (void)fetchSectionData:(BOOL)a0 completion:(id /* block */)a1;
- (void)loadMoreSectionDataWithCompletion:(id /* block */)a0;
- (BOOL)shouldUseTotal;
- (void)updateUnreadCount:(id)a0 unreadCount:(long long)a1;
- (void).cxx_destruct;
- (long long)type;
- (void)dealloc;
- (BOOL)isMine;

@end
