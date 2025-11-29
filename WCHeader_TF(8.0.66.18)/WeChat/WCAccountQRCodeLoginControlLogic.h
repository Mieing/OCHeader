@class NSString, WCPlayLiveWithoutLoginControlLogic, QRCodeLoginLogic, WCAccountManualAuthControlLogic;

@interface WCAccountQRCodeLoginControlLogic : WCAccountBaseControlLogic <QRCodeLoginLogicDelegate, MMKernelExt, WCAccountLoginByQRCodeViewControllerDelegate, WCAccountManualAuthControlLogicDelegate> {
    QRCodeLoginLogic *m_qrcodeLoginLogic;
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
}

@property (retain, nonatomic) WCPlayLiveWithoutLoginControlLogic *m_playLiveWthioutLoginLoigc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)getQRCodeViewController;
- (void)onQRCodeLoginUserName:(id)a0 Pwd:(id)a1 nickName:(id)a2 headImgURL:(id)a3;
- (void)startGetQRCode;
- (id)getQRCodeLoginLogic;
- (void)sendGetQRCodeRequest;
- (void)OnQRCodeLoginUUIDExipred;
- (void)OnQRCodeLoginFail;
- (void)OnQRCodeLoginReciveImage:(id)a0 expiredTime:(unsigned int)a1 loginURL:(id)a2;
- (void)OnQRCodeLoginScaned:(id)a0 nickName:(id)a1 authUrl:(id)a2;
- (void)OnQRCodeLoginConfirmedWithUserName:(id)a0 pwd:(id)a1 nickName:(id)a2 headImgURL:(id)a3;
- (void)OnQRCodeLoginExpired;
- (void)OnQRCodeLoginCancel;
- (id)OnQRCodeLogicGetCurrentViewController;
- (void)startLogic;
- (void)onManualAuthControlLogicStop:(unsigned long long)a0 response:(id)a1;
- (BOOL)onManualAuthControlLogicError:(id)a0;
- (void)onRefreshBtnClicked;
- (void)onCancel;
- (void)onCancelLogin;
- (void)onPlayLiveWithoutLogin;
- (void)onMainControllStart;
- (void)onLaunchOpenFirstView;
- (void).cxx_destruct;

@end
