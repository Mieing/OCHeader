@interface MinishopAssistContactInfoAssist : BrandBasedPluginContactInfoAssist

- (id)getPluginIntro;
- (void)addSection:(id /* block */)a0;
- (void)reloadInstalledTableViewData;
- (void)enterContactSession;
- (void)handleTopSwitchChange:(id)a0;
- (void)handleMuteSwitchChange:(id)a0;
- (void)enterHelpCenter;
- (void)onClickClearMessage:(id)a0;
- (void)reportOperation:(unsigned int)a0 type:(unsigned int)a1;

@end
