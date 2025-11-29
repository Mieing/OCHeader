@class AFDFamiliarFriendsDataProvider, NSArray, NSString, NSMutableSet, NSDate, AFDFriendsRelationListDataController, AWECodeGenV1FamiliarResponse;

@interface AFDFamiliarFriendsListDataController : NSObject <AWEUserMessage>

@property (retain, nonatomic) AFDFriendsRelationListDataController *relationListDataController;
@property (retain, nonatomic) AFDFamiliarFriendsDataProvider *friendsDataProvider;
@property (retain, nonatomic) AWECodeGenV1FamiliarResponse *familiarResponse;
@property (retain, nonatomic) NSMutableSet *unfollowedUserArray;
@property (retain, nonatomic) NSDate *startTime;
@property (copy, nonatomic) NSArray *friendsUserList;
@property (copy, nonatomic) NSArray *recentVisitArray;
@property (nonatomic) BOOL isRequestFriendsListOnAir;
@property (nonatomic) BOOL hasRequestRelationData;
@property (copy, nonatomic) id /* block */ updateFamiliarFriendsBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableLocalStorageNumber;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishUnBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishHideMyPostFromUser:(id)a0 status:(long long)a1;
- (void)didFinishShowMyPostToUser:(id)a0 status:(long long)a1;
- (void)didFinishHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishUnHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishTapTAIsFriendWithUser:(id)a0 isFriend:(BOOL)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)didChangePrivateRelationWithUser:(id)a0 relationType:(long long)a1 relationValue:(long long)a2;
- (id)currentUserKeyWithOriginKey:(id)a0;
- (BOOL)shouldUseFollowData;
- (void)refreshLocalRecentVisitArray;
- (id)sortDataSourceByCloseFriends:(id)a0;
- (void)trackListDataMonitor:(BOOL)a0 targetCount:(unsigned long long)a1 success:(BOOL)a2;
- (void)saveWholeFriendsListWithFriendsIDs:(id)a0;
- (void)fetchFriendsRelationListWithCompletion:(id /* block */)a0;
- (void)storageRecentlyVisitArray;
- (void)removeLocalFriendWithUids:(id)a0;
- (long long)indexInDataSourceForUserID:(id)a0;
- (void)removeDataSourceAtIndex:(long long)a0;
- (long long)indexInList:(id)a0 forUserID:(id)a1;
- (id)obtainWholefriendsIDs;
- (long long)judgeHideHerPostStatusWithUid:(id)a0;
- (long long)judgeHideMyPostStatusWithUid:(id)a0;
- (long long)judgeIsFriendSwitchStatusWithUid:(id)a0;
- (BOOL)judgePrivateRelation:(long long)a0 withUid:(id)a1;
- (void)p_updateUserHideMyPostFromUser:(id)a0 status:(long long)a1;
- (void)p_updateUserHidePostFromHer:(id)a0 status:(long long)a1;
- (long long)totalNumberOfFriendsList;
- (long long)getLocalFriendsNumber;
- (void)fetchFriendsListData:(id /* block */)a0;
- (void)refreshFriendsListActiveStatusWithUserList:(id)a0 withCompletion:(id /* block */)a1;
- (void)saveRecentVisitData:(id)a0 userID:(id)a1;
- (long long)indexInRecentVisitArray:(id)a0;
- (void)updateRecentlyVisitArray:(id)a0;
- (id)friendsListDataHotsoonText;
- (void)removeUnfollowedUserWithCompletion:(id /* block */)a0;
- (void)updateHideHerPostStatusWith:(long long)a0 userID:(id)a1;
- (void)updateHideMyPostStatusWith:(long long)a0 userID:(id)a1;
- (void)updateIsFriendSwitchStatusWith:(long long)a0 userID:(id)a1;
- (void)updatePrivateRelation:(long long)a0 relationValue:(BOOL)a1 userID:(id)a2;
- (id)getFriendIDsSet;
- (long long)getCurrentFriendsNumber;
- (id)getTotalNumberStringOfFriends;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)removeUserWithUserID:(id)a0;

@end
