@class NSString;

@interface AWEFollowListDataProvider : AWESocialRelationDataProvider <AWEUserMessage, AWEFollowListDataProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interceptor_readFromNetwork:(id)a0 completion:(id /* block */)a1;
- (void)interceptor_readFromFile:(id)a0 completion:(id /* block */)a1;
- (id)interceptor_readFromMemory:(id)a0;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (id)readFromMemory:(id)a0;
- (void)readFromFile:(id)a0 completion:(id /* block */)a1;
- (void)readFromNetwork:(id)a0 completion:(id /* block */)a1;
- (void)updateFollowUserWithProfileUser:(id)a0;
- (id)localUidStorageKeyWithType:(unsigned long long)a0;
- (void)new_buildResponseWithFollowUids:(id)a0 request:(id)a1 networkResponse:(id)a2 compensateUserList:(id)a3 completion:(id /* block */)a4;
- (id)init;
- (id)identifier;
- (void)dealloc;

@end
