@interface IESGCPInteractGameAPI : IESGCPApi

- (void)recordOpenGameWithRoomId:(id)a0 anchorId:(id)a1 gameId:(id)a2 userNickName:(id)a3;
- (void)checkVisibleWithGameId:(id)a0 roomId:(id)a1 anchorId:(id)a2 completion:(id /* block */)a3;

@end
