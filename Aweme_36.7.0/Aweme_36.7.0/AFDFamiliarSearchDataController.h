@class AWEFriendsListDataController, NSOrderedSet, NSArray, NSString, NSDate, NSNumber;

@interface AFDFamiliarSearchDataController : NSObject <AWEUserMessage, AFDFamiliarSearchDataControllerProtocol>

@property (retain, nonatomic) AWEFriendsListDataController *dataController;
@property (nonatomic) BOOL isTotalAccurate;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) long long totalNumberOfFriendsList;
@property (copy, nonatomic) NSOrderedSet *friendIDsSet;
@property (copy, nonatomic) NSArray *localFriendsList;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) unsigned long long friendsListSceneStyle;
@property (copy, nonatomic) NSNumber *recommendType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)p_fetchLocalFriendsDataUseLocalUidsWithCompletion:(id /* block */)a0;
- (BOOL)isRequestFriendsListOnAir;
- (id)currentUserKeyWithOriginKey:(id)a0;
- (id)sortDataSourceByCloseFriends:(id)a0;
- (void)saveWholeFriendsListWithFriendsIDs:(id)a0;
- (void)removeLocalFriendWithUids:(id)a0;
- (void)removeDataSourceAtIndex:(long long)a0;
- (id)obtainWholefriendsIDs;
- (void)fetchFriendsListDataWithUseLocal:(BOOL)a0 completion:(id /* block */)a1;
- (void)trackListDataMonitor:(BOOL)a0;
- (void)p_fetchLocalFriendsDataWithNewUids:(id)a0 completion:(id /* block */)a1;
- (void)processIMContactUsers:(id)a0 friendsIds:(id)a1 completion:(id /* block */)a2;
- (void)fetchFriendsUserInfoWithFriendIDs:(id)a0 completion:(id /* block */)a1;
- (void)sortDataSourceWithInsertItems:(id)a0;
- (void)fetchFriendsListInLocalDatabaseWithFriendsIds:(id)a0 completion:(id /* block */)a1;
- (void)fetchFriendsListDataWithCompletion:(id /* block */)a0;
- (void)loadMoreFriendsWithCompletion:(id /* block */)a0;
- (void)removeObjectInFriendsIDsSetWithUserID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
