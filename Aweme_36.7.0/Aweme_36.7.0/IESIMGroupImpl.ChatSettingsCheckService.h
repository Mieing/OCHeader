@interface IESIMGroupImpl.ChatSettingsCheckService : NSObject <IESIMChatSettingsCheckServiceProtocol>

- (id)makeViewModel;
- (id)makeSectionViewModel;
- (id)makeItemViewModel;
- (void)showChatSettingsCheckViewControllerWithViewModel:(id)a0;
- (id)init;

@end
