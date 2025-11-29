@class NSString, WCAccountManualAuthControlLogic, CheckQRCodeLoginCGI;
@protocol PushLoginURLCGIDelegate;

@interface PushLoginURLCGI : WCAccountBaseControlLogic <CheckQRCodeLoginDelegate, WCAccountManualAuthControlLogicDelegate> {
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
}

@property (retain, nonatomic) CheckQRCodeLoginCGI *checkQRCodeCgi;
@property (weak, nonatomic) id<PushLoginURLCGIDelegate> delegate;
@property (nonatomic) int loginType;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *password;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopExpiredTimeCheck;
- (void)onTimeCheckExpired;
- (void)startRequest;
- (void)onPushLoginURLReturnWithResponse:(id)a0;
- (void)stopRequest;
- (void)doAuthWithType:(int)a0;
- (void)onManualAuthControlLogicStop:(unsigned long long)a0 response:(id)a1;
- (BOOL)onManualAuthControlLogicError:(id)a0;
- (void)OnCheckQRCodeLoginUUIDExpired;
- (void)OnCheckQRCodeLoginFail;
- (void)OnCheckQRCodeLoginExpried;
- (void)OnCheckQRCodeLoginCancel;
- (void)OnCheckQRCodeLoginConfirmedWithUserName:(id)a0 pwd:(id)a1 nickName:(id)a2 headImageURL:(id)a3;
- (void)OnCheckQRCodeLoginScaned:(id)a0 nickName:(id)a1 authUrl:(id)a2;
- (id)OnCheckQRCodeLogicGetCurrentViewController;
- (void).cxx_destruct;

@end
