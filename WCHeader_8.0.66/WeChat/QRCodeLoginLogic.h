@class WCCgiBlockHelper, NSString, CheckQRCodeLoginCGI;
@protocol QRCodeLoginLogicDelegate;

@interface QRCodeLoginLogic : NSObject <CheckQRCodeLoginDelegate>

@property (retain, nonatomic) WCCgiBlockHelper *getLoginQRCodeCgiHelper;
@property (retain, nonatomic) CheckQRCodeLoginCGI *m_checkQRCodeLoginCGI;
@property (weak, nonatomic) id<QRCodeLoginLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)StartQRCodeLogin;
- (void)StopQRCodeLogin;
- (void)onGetLoginQRCodeWithResponse:(id)a0;
- (void)OnCheckQRCodeLoginUUIDExpired;
- (void)OnCheckQRCodeLoginFail;
- (void)OnCheckQRCodeLoginScaned:(id)a0 nickName:(id)a1 authUrl:(id)a2;
- (void)OnCheckQRCodeLoginConfirmedWithUserName:(id)a0 pwd:(id)a1 nickName:(id)a2 headImageURL:(id)a3;
- (void)OnCheckQRCodeLoginExpried;
- (void)OnCheckQRCodeLoginCancel;
- (id)OnCheckQRCodeLogicGetCurrentViewController;
- (void).cxx_destruct;

@end
