@interface IESLiveGuestBattleApi : HTSLiveApi

- (void)finishGuestBattleWithRoomID:(id)a0 reason:(long long)a1 callback:(id /* block */)a2;
- (void)pauseGuestBattleWithRoomID:(id)a0 callback:(id /* block */)a1;
- (void)resumeGuestBattleWithRoomID:(id)a0 callback:(id /* block */)a1;

@end
