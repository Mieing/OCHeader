@class AWEIMComponentManager;

@interface IESIMConversationSettingImpl.ChatSettingsNavigationBarComponent : AWEIMComponentBase <AWEIMComponentContainer, AWEIMComponentManagerDependency>

@property (nonatomic, retain) AWEIMComponentManager *componentManager;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
