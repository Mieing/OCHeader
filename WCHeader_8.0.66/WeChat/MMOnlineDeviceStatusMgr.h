@class NSString, OnlineDeviceInfoViewController, MultiDeviceManageViewController;

@interface MMOnlineDeviceStatusMgr : MMUserService <IOnlineClientMgrExt, MMServiceProtocol> {
    OnlineDeviceInfoViewController *_viewController;
    MultiDeviceManageViewController *_multiDeviceViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)hideDeviceInfoView;
- (void)showDeviceInfoViewWithIsManualOpen:(BOOL)a0 fromViewController:(id)a1;
- (void)showDeviceInfoUnlockView:(id)a0 name:(id)a1;
- (void)onLogoutWeb;
- (void)onExtDeviceNotifyUnlockWithMessage:(id)a0;
- (void).cxx_destruct;

@end
