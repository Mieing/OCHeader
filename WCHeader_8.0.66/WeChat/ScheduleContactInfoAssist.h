@interface ScheduleContactInfoAssist : BrandBasedPluginContactInfoAssist

- (id)getPluginIntro;
- (void)reloadInstalledTableViewData;
- (void)onClearMsg;
- (BOOL)forbidShowInstallOrUninstall;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;

@end
