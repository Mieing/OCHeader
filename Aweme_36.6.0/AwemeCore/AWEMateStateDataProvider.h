@class NSString, NSMutableSet;

@interface AWEMateStateDataProvider : AWESocialRelationDataProvider <AWEUserMessage, AWEMateStateDataProvider>

@property (retain, nonatomic) NSMutableSet *hasSentMateApplicationUidSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)monitorMateRelation:(id)a0 logID:(id)a1 scene:(id)a2;
+ (long long)p_checkMateRelation:(id)a0 followStatus:(long long)a1 followerStatus:(long long)a2 followerRequestStatus:(long long)a3;

- (void)interceptor_write:(id)a0 completion:(id /* block */)a1;
- (id)interceptor_readFromMemory:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)didReceiveUnfollowUserResponse:(id)a0 context:(id)a1 error:(id)a2;
- (id)readFromMemory:(id)a0;
- (BOOL)isMate:(id)a0 scene:(id)a1;
- (BOOL)isMateWithUserID:(id)a0 scene:(id)a1;
- (BOOL)hasMateApplicationFromUser:(id)a0;
- (BOOL)hasMateApplicationToUser:(id)a0;
- (BOOL)hasSentMateApplicationAfterAppLaunchToUser:(id)a0;
- (id)mateCreateTimeForUser:(id)a0;
- (BOOL)enableMateSupportSingleRelation;
- (void)p_addMate:(id)a0 completion:(id /* block */)a1;
- (void)p_batchAddMate:(id)a0 completion:(id /* block */)a1;
- (void)p_removeMate:(id)a0 completion:(id /* block */)a1;
- (void)p_updateMateCreateTime:(id)a0 withOriginalRelationModel:(id)a1;
- (BOOL)p_isMateRelation:(id)a0 equalTo:(id)a1;
- (void)p_addLocalMateDataWithUsers:(id)a0;
- (void)p_deleteLocalMateDataWithUserID:(id)a0 localModifyAction:(id)a1;
- (void)p_localRemoveMateIfNeeded:(id)a0 user:(id)a1 localModifyAction:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)identifier;
- (void)dealloc;
- (void)write:(id)a0 completion:(id /* block */)a1;

@end
