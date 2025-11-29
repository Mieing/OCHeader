@interface AWERouterMusicAbilityInfo : AWERouterAbilityInfo

@property (copy, nonatomic) id /* block */ abilityCompletion;

- (id)parametersPromiseCheck;
- (void)abilityAssemblyWithCompletion:(id /* block */)a0;
- (id)abilityTrackData;
- (void)cancelOperationTask;
- (id /* block */)p_parametersCheck;
- (BOOL)p_ignoreMusicInfoFailedCheck;
- (void)p_basicDataConfiguration;
- (void)p_updatePublishMusicInfo;
- (void).cxx_destruct;

@end
