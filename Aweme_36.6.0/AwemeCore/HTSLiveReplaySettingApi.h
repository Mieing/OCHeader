@interface HTSLiveReplaySettingApi : HTSLiveApi

- (void)updateReplaySetingWithParams:(id)a0 completion:(id /* block */)a1;
- (void)requestReplaySettingWithCompletion:(id /* block */)a0;
- (void)updateReplaySetingWithSwitch:(long long)a0 enable:(BOOL)a1 roomID:(id)a2 completion:(id /* block */)a3;

@end
