@interface IESGCPHeliumGameApi : IESGCPApi

- (int)_apiLaunchSceneWithScene:(long long)a0;
- (void)checkOpenAbilityWithRouterModel:(id)a0 completion:(id /* block */)a1;
- (void)recordOpenGameWithRouterModel:(id)a0 anchorId:(id)a1 videoId:(id)a2 nickName:(id)a3;

@end
