@class NSNumber, NSString;

@interface AWEFriendCountDataProvider : AWESocialRelationDataProvider <AWEUserMessage, AWEFriendCountDataProvider>

@property (retain, nonatomic) NSNumber *friendCountMemoryCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)willStartSwitchAccountWithUser:(id)a0;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (id)readFromMemory:(id)a0;
- (void)readFromFile:(id)a0 completion:(id /* block */)a1;
- (void)updateFriendTableWithProfileUser:(id)a0;
- (void)localDataCenterDidUpdate:(id)a0;
- (id)syncReadFromStorage;
- (void)updateCacheAndNotifyObservers:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)identifier;
- (void)dealloc;

@end
