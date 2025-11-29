@interface IESIMGroupImpl.GroupAssistantDynamicService : HTSService <IESIMGroupAssistantDynamicService>

- (id)cachedBotInfoForCon:(id)a0;
- (void)cacheBotInfoForCon:(id)a0 botInfo:(id)a1;
- (void)showGuidePanelWithCon:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (void)showGroupAssistantSettingsWithCon:(id)a0 groupAssistantSecUid:(id)a1 groupAssistantUser:(id)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (void)showGroupAssistantProfileWithUid:(id)a0 secUid:(id)a1 cid:(id)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (BOOL)enableDynamicWithScene:(long long)a0;
- (id)init;

@end
