@interface IESLiveRoomBattleApi : HTSLiveApi

- (void)get:(id)a0 params:(id)a1 modelClass:(Class)a2 callback:(id /* block */)a3;
- (void)searchForSuggestWordsWith:(id)a0 callback:(id /* block */)a1;
- (void)fetchInviteeListWithType:(long long)a0 roomID:(id)a1 callback:(id /* block */)a2;
- (void)searchForResultWith:(id)a0 offset:(long long)a1 count:(long long)a2 currentAnchorID:(id)a3 searchID:(id)a4 callback:(id /* block */)a5;
- (void)inviteRoomBattleWithType:(long long)a0 inviterRoomID:(id)a1 inviteeRoomID:(id)a2 inviteSource:(long long)a3 callback:(id /* block */)a4;
- (void)cancelInviteRoomBattleWithType:(long long)a0 inviterRoomID:(id)a1 inviteeRoomID:(id)a2 callback:(id /* block */)a3;
- (void)replyRoomBattleWithType:(long long)a0 inviterRoomID:(id)a1 inviteeRoomID:(id)a2 replyType:(long long)a3 autoReject:(BOOL)a4 callback:(id /* block */)a5;
- (void)selectGuestWithRoomBattleType:(long long)a0 roomID:(id)a1 selectGuestsType:(long long)a2 switchScene:(unsigned long long)a3 toLayout:(int)a4 guestsUid:(id)a5 callback:(id /* block */)a6;
- (void)inviteOneMoreWithInviterRoomID:(id)a0 InviteeRoomID:(id)a1 callback:(id /* block */)a2;
- (void)replyOneMoreInviterRoomID:(id)a0 inviteeRoomID:(id)a1 replyType:(long long)a2 autoReject:(BOOL)a3 callback:(id /* block */)a4;
- (void)createRoomBattleWithRoomID:(id)a0 startType:(long long)a1 callback:(id /* block */)a2;
- (void)finishRoomBattleWithRoomID:(id)a0 finishType:(long long)a1 finishReason:(long long)a2 teamFightID:(id)a3 callback:(id /* block */)a4;
- (void)fetchRoomBattleMatchInfo:(id)a0 matchType:(int)a1 callback:(id /* block */)a2;
- (void)startRoomBattleMatch:(id)a0 matchType:(int)a1 status:(int)a2 expectedTime:(long long)a3 callback:(id /* block */)a4;
- (void)cancelRoomBattleMatch:(id)a0 matchType:(int)a1 callback:(id /* block */)a2;
- (void)startRoomBattleReserve:(id)a0 matchType:(int)a1 callback:(id /* block */)a2;
- (void)cancelRoomBattleReserve:(id)a0 matchType:(int)a1 callback:(id /* block */)a2;

@end
