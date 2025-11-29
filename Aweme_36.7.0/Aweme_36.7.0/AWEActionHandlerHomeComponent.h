@interface AWEActionHandlerHomeComponent : AWEUserHomeBaseComponent

- (void)didDiggAweme:(id)a0;
- (void)shouldChangeLanguage:(id)a0;
- (void)didEnterProfileEditVC:(id)a0;
- (void)didEnableAvatarDecoration:(id)a0;
- (void)didPostRepost:(id)a0;
- (void)p_profileExtensionModuleDidEdit:(id)a0;
- (void)imSettingUpdated:(id)a0;
- (void)newPrivacySettingItemDidChange:(id)a0;
- (void)p_refreshPostWork;
- (void)viewDidLoad;
- (void)onInit;
- (void)p_addObservers;

@end
