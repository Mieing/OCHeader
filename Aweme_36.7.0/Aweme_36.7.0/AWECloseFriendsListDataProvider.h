@class NSDictionary, NSNumber, NSString;

@interface AWECloseFriendsListDataProvider : AWESocialRelationDataProvider <AWEUserMessage, AWECloseFriendsListDataProvider>

@property (retain, nonatomic) NSDictionary *afdCloseFriendsMap;
@property (retain, nonatomic) NSNumber *closeFriendsCountNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interceptor_readFromFile:(id)a0 completion:(id /* block */)a1;
- (id)interceptor_readFromMemory:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)willStartSwitchAccountWithUser:(id)a0;
- (id)readFromMemory:(id)a0;
- (void)removeForwardCloseFriendsWithUIDs:(id)a0;
- (void)readFromFile:(id)a0 completion:(id /* block */)a1;
- (void)splitFriendsList:(id)a0 completion:(id /* block */)a1;
- (void)splitFriendsList:(id)a0 shouldShowAllCloseFriends:(BOOL)a1 completion:(id /* block */)a2;
- (long long)getCloseFriendsCountWithScene:(id)a0;
- (void)loadCloseFriendsDataIfNeededWithScene:(id)a0;
- (void)localDataCenterDidUpdate:(id)a0;
- (void)tableDidPrepare:(id)a0;
- (id)getNewUserMapWithUpdateUsers:(id)a0 andDeleteUsers:(id)a1;
- (long long)getCloseFriendsCount:(id)a0;
- (void)updateCacheAndNotifyObservers:(id)a0 closeFriendsCount:(long long)a1;
- (id)createListReadResponseWithDict:(id)a0;
- (void)updateCacheAndWriteAFDLocalCloseFriendModelToDB:(id)a0 andDeleteUsers:(id)a1 action:(id)a2;
- (void)p_fillUpCloseFriendsUsers:(id)a0 completion:(id /* block */)a1;
- (id)getAFDLocalCloseFriendModelFromMemoryWithUserID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)identifier;
- (void)dealloc;

@end
