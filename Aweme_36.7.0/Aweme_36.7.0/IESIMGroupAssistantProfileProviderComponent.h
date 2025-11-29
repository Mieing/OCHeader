@interface IESIMGroupAssistantProfileProviderComponent : AWEIMComponentBase <IESIMChatSettingsViewModelsProviderInterface, IESIMChatSettingsScrollDisabledConfiguration>

- (void)themeReload;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (BOOL)chatSettingsScrollDisabled;
- (id)createSectionViewModels;
- (id)init;

@end
