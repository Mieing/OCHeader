@interface ReaderAppContactInfoAssist : PluginContactInfoAssist

- (id)getPluginIntro;
- (id)getUnInstallTip;
- (id)getUnInstallBtnTitle;
- (void)reloadInstalledTableViewData;
- (void)onClickFeedback;
- (void)installPlugin;
- (void)uninstallPlugin;
- (void)onMuteChange:(id)a0;
- (void)onSessionTopStateChange:(id)a0;
- (void)reportMuteOfNewsEnable:(BOOL)a0;
- (void)reportTopOfNews:(BOOL)a0;

@end
