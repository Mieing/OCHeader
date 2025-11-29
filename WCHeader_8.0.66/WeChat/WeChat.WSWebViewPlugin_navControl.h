@interface WeChat.WSWebViewPlugin_navControl : WSWebViewPluginBase {
    void /* unknown type, empty encoding */ controlStatus;
}

- (BOOL)tryTransferNavControlToH5;
- (void)takeControlOfExitWith:(id)a0;
- (void)resignControlExit;
- (void)doExit;
- (id)navOwner;
- (void)configNativeNavBarWith:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
