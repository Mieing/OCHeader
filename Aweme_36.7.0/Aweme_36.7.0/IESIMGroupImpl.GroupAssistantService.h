@interface IESIMGroupImpl.GroupAssistantService : HTSService <IESIMGroupAssistantService>

- (void)showGroupAssistantProfileWithUid:(id)a0 secUid:(id)a1 cid:(id)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (void)showGroupAssistantSettingsWithCon:(id)a0 groupAssistantSecUid:(id)a1 groupAssistantUser:(id)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (BOOL)enableGroupAssistantForCon:(id)a0;
- (BOOL)GroupAssistantIsOpenForCon:(id)a0;
- (void)groupAssistantUserForCon:(id)a0 completion:(id /* block */)a1;
- (id)groupAssistantCustomUserForCon:(id)a0;
- (void)editGroupAssistantOpenForCon:(id)a0 state:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)shouldNotGatherGroupAssistantOpenAPIMessage:(id)a0 after:(id)a1;
- (id)OpenAPINameForMessage:(id)a0;
- (void)mentionGroupAssistantInCon:(id)a0 scene:(id)a1;
- (id)init;

@end
