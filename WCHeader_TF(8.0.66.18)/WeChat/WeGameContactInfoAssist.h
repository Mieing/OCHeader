@class NSString, ForwardMessageLogicController;

@interface WeGameContactInfoAssist : BrandBasedPluginContactInfoAssist <ForwardMessageLogicDelegate, IWCDeviceBrandMgrExt> {
    ForwardMessageLogicController *m_forwardLogic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getPluginIntro;
- (void)reloadInstalledTableViewData;
- (void)goWeGameSessionFrame;
- (void)inviteFriend;
- (void)setPushSetting;
- (id)getCurrentViewController;
- (void)onClearMsg;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)handleMuteSwitchChange:(id)a0;
- (void)handleTopSwitchChange:(id)a0;
- (void)installPlugin;
- (void)uninstallPlugin;
- (void).cxx_destruct;

@end
