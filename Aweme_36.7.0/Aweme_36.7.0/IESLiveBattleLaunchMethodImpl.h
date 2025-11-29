@interface IESLiveBattleLaunchMethodImpl : IESLiveBattleLaunchMethod

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)handlePlayLaunchEvent:(long long)a0 extraParams:(id)a1;
- (id)invitePlayWithLynxData:(id)a0;
- (id)replyPlayWithLynxData:(id)a0;
- (id)openPlayWithLynxData:(id)a0;
- (id)switchSceneWithLynxData:(id)a0;

@end
