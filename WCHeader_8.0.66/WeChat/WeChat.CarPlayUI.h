@interface WeChat.CarPlayUI : MMUserService <CPTabBarTemplateDelegate, MMServiceProtocol, CPInterfaceControllerDelegate> {
    void /* unknown type, empty encoding */ interfaceController;
    void /* unknown type, empty encoding */ tabBarController;
    void /* unknown type, empty encoding */ tabBarControllerElements;
    void /* unknown type, empty encoding */ currentAlert;
}

@property (nonatomic, readonly) BOOL enableCarPlay;
@property (nonatomic, retain) void /* unknown type, empty encoding */ presentedController;

- (void)showActionSheetWithActionSheet:(id)a0;
- (void)showAlertWithTitle:(id)a0;
- (void)showAlertWithTitle:(id)a0 confirmHandler:(id /* block */)a1;
- (void)showAlertWithTitle:(id)a0 cancelTitle:(id)a1 cancelHandler:(id /* block */)a2 confirmTitle:(id)a3 confirmHandler:(id /* block */)a4;
- (void)dismissAlert;
- (void)tabBarTemplate:(id)a0 didSelectTemplate:(id)a1;
- (BOOL)isOnVoIP;
- (void)showEmptyCallRecords;
- (void)showRecentTalksController;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)connectedCarplayWithInterfaceController:(id)a0;
- (void)disconnectedCarplay;
- (BOOL)isCarPlayConnected;
- (BOOL)isShowingNowPlayingController;
- (void)presentController:(id /* block */)a0 animated:(BOOL)a1;
- (void)popController;
- (void)replaceRootController:(id /* block */)a0 animated:(BOOL)a1;
- (void)showTabBarController;
- (void)templateWillAppear:(id)a0 animated:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;

@end
