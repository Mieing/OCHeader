@interface IESLiveTeamFightApi : HTSLiveApi

- (void)createTeamFightWithRoomId:(id)a0 duration:(id)a1 option:(id)a2 needSwitchScene:(BOOL)a3 savedGuest:(id)a4 callback:(id /* block */)a5;
- (void)startTeamFightWithRoomId:(id)a0 duration:(id)a1 callback:(id /* block */)a2;
- (void)finishTeamFightWithRoomId:(id)a0 reason:(id)a1 teamFightID:(id)a2 needSwitchScene:(BOOL)a3 callback:(id /* block */)a4;
- (void)updateTeamFightPlayerTeamWithRoomID:(id)a0 teamFightID:(id)a1 targetTeam:(int)a2 updateType:(int)a3 guestID:(id)a4 postion:(id)a5 callback:(id /* block */)a6;

@end
