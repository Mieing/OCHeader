@interface IESLiveMultiLinkerApi : HTSLiveApi

- (void)updateBattleSettings:(id)a0 withRoomID:(id)a1 secUid:(id)a2 callback:(id /* block */)a3;
- (void)multiAutoMatchWithFirst:(BOOL)a0 matchType:(id)a1 subType:(id)a2 isHighWay:(BOOL)a3 extraParams:(id)a4 finished:(id /* block */)a5;
- (void)cancelMultiAutoMatchWithType:(unsigned long long)a0 matchType:(id)a1 cancelMultiMatch:(BOOL)a2 participantsStr:(id)a3 completion:(id /* block */)a4;
- (void)updateStreamLayoutWithType:(int)a0 anchorUIOperationLayout:(int)a1 focusUid:(id)a2 callback:(id /* block */)a3;
- (void)rejectAutoMatchInvite:(unsigned long long)a0 inviteUserID:(id)a1 extraParams:(id)a2 callback:(id /* block */)a3;

@end
