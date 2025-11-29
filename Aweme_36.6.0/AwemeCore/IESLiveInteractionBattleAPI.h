@interface IESLiveInteractionBattleAPI : HTSLiveApi

- (void)fetchPlayModeInfoWithRoomId:(id)a0 callback:(id /* block */)a1;
- (void)getTeamFightConfigWithType:(long long)a0 completion:(id /* block */)a1;
- (void)fetchAnnounceWithPlayMode:(int)a0 RoomID:(id)a1 completion:(id /* block */)a2;
- (void)readPlayModeAnnounceWithRoomId:(id)a0 announceIds:(id)a1 completion:(id /* block */)a2;

@end
