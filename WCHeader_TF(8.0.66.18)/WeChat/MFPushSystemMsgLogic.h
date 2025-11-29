@class MFBannerBtn, MMTimer, NetworkCheckViewController, UIViewController;
@protocol MFPushSystemMsgDelegate;

@interface MFPushSystemMsgLogic : MMObject <INetworkStatusMgrExt> {
    NetworkCheckViewController *m_networkCheckViewController;
    unsigned int m_uiTipStatus;
    MMTimer *m_progressTimer;
}

@property (readonly, nonatomic) MFBannerBtn *bannerBtn;
@property (weak, nonatomic) id<MFPushSystemMsgDelegate> delegate;
@property (weak, nonatomic) UIViewController *viewController;

- (id)init;
- (void)makeNewPushSymtemView:(id)a0;
- (void)onBannerClick:(id)a0;
- (void)updateProgress;
- (void)dismissSystemMessage;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (void)onNetworkCheckFinished:(BOOL)a0 baseNetOK:(BOOL)a1 longLinkOK:(BOOL)a2 kvString:(id)a3;
- (void)updateSystemNetworkNotification:(unsigned int)a0;
- (id)disconnetStatusBannerDesc;
- (void)showDisconnetStatusNetworkTip;
- (void).cxx_destruct;

@end
