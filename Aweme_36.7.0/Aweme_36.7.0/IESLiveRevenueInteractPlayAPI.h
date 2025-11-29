@interface IESLiveRevenueInteractPlayAPI : HTSLiveApi

- (id)anchorID;
- (id)battleID;
- (void)changeToMultiPKModeWithBattleConfig:(id)a0 callback:(id /* block */)a1;
- (void)changeMultiPKTeamWithBattleConfig:(id)a0 callback:(id /* block */)a1;
- (void)askPropInfoNotifyWithNotifyType:(unsigned long long)a0 callback:(id /* block */)a1;
- (void)requestBattleOpenWithBattleConfig:(id)a0 members:(id)a1 extraParams:(id)a2 callback:(id /* block */)a3;
- (void)requestBattleOnceMoreInviteWithBattleConfig:(id)a0 callback:(id /* block */)a1;
- (void)requestBattleOnceMoreReplyWithInviterId:(id)a0 inviteType:(int)a1 toMultiPKMode:(int)a2 isAccept:(BOOL)a3 callback:(id /* block */)a4;
- (void)requestBattleFinishWithReason:(long long)a0 isManually:(BOOL)a1 callback:(id /* block */)a2;
- (void)requestBattlePunishEndWithCallback:(id /* block */)a0;
- (void)requestBattleStateTransition:(long long)a0 stage:(long long)a1 callback:(id /* block */)a2;
- (id)channelID;
- (id)theme;
- (unsigned long long)scene;
- (id)roomID;

@end
