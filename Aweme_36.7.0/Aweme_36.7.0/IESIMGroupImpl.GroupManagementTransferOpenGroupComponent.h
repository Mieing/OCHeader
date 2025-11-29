@interface IESIMGroupImpl.GroupManagementTransferOpenGroupComponent : AWEIMComponentBase <IESIMGroupSettingsTurnOpenGroupMessage>

- (void)componentDidMounted:(id)a0;
- (void)didConversationUpdateToPublicGroup:(id)a0 withCompletion:(id /* block */)a1;
- (void)fallBackToGroupSettingsVCAndUpdateConversation:(id)a0 withCompletion:(id /* block */)a1;
- (id)init;
- (void)dealloc;

@end
