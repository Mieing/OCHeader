@class AWEFollowCountResponse, NSString;

@interface AWEFollowCountDataProvider : AWESocialRelationDataProvider <AWEUserMessage, AWEFollowCountDataProvider>

@property (retain, nonatomic) AWEFollowCountResponse *followCountMemoryCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interceptor_readFromFile:(id)a0 completion:(id /* block */)a1;
- (id)interceptor_readFromMemory:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)willStartSwitchAccountWithUser:(id)a0;
- (id)readFromMemory:(id)a0;
- (void)readFromFile:(id)a0 completion:(id /* block */)a1;
- (void)updateMutualCacheAndNotifyObservers:(long long)a0;
- (void)localDataCenterDidUpdate:(id)a0;
- (id)syncReadFromStorage;
- (void)updateCacheAndNotifyObservers:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)identifier;

@end
