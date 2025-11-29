@class NSString, UrlController, ForwardMessageLogicController;

@interface WeSportContactInfoAssist : BrandBasedPluginContactInfoAssist <ForwardMessageLogicDelegate, IWCDeviceBrandMgrExt> {
    UrlController *m_urlController;
    ForwardMessageLogicController *m_forwardLogic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0 delegate:(id)a1;
- (id)getPluginIntro;
- (void)reloadInstalledTableViewData;
- (void)goWeSportCenter;
- (void)goWeSportSessionFrame;
- (void)inviteFriend;
- (id)getCurrentViewController;
- (void)goToCommonQuestion;
- (void)onShowDataSource;
- (void)onSetPrivacy;
- (void)onClearMsg;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)handleMuteSwitchChange:(id)a0;
- (void)handleTopSwitchChange:(id)a0;
- (void)installPlugin;
- (void)uninstallPlugin;
- (void)onWCDeviceUnbindEnd:(id)a0 Error:(id)a1;
- (void)cancelFocus;
- (void).cxx_destruct;

@end
