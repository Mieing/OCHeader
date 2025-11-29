@class NSString;

@interface AWEMateListDataProvider : AWESocialRelationDataProvider <AWEUserMessage, AWEMateListDataProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)didReceiveFollowUserResponse:(id)a0 context:(id)a1 error:(id)a2;
- (void)didReceiveUnfollowUserResponse:(id)a0 context:(id)a1 error:(id)a2;
- (void)readFromFile:(id)a0 completion:(id /* block */)a1;
- (void)readFromNetwork:(id)a0 completion:(id /* block */)a1;
- (void)updateMateUserWithProfileUser:(id)a0;
- (void)p_responseWithMateUids:(id)a0 request:(id)a1 completion:(id /* block */)a2;
- (void)p_updateLocalMateListWithMateUidList:(id)a0 request:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (id)identifier;
- (void)dealloc;

@end
