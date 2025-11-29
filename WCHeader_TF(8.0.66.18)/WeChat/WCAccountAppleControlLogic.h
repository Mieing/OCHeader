@class AppleIDBindLogic, NSString, WCAccountManualAuthControlLogic;

@interface WCAccountAppleControlLogic : WCAccountBaseControlLogic <AppleIDBindLogicDelegate, WCAccountManualAuthControlLogicDelegate>

@property (retain, nonatomic) WCAccountManualAuthControlLogic *manualAuthLogic;
@property (retain, nonatomic) AppleIDBindLogic *appleIDBindLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (void)startLogic;
- (id)getViewController;
- (void)onRequestAuthorizeFromAppleFinished:(BOOL)a0;
- (void)onAuthorizeAppleIDSuceededWithWrap:(id)a0;
- (void)onAuthorizeAppleIDFailedWithError:(id)a0;
- (void)startManualAuthWithWrap:(id)a0;
- (void)startRegisterWithTicket:(id)a0;
- (void)onManualAuthControlLogicStop:(unsigned long long)a0 response:(id)a1;
- (BOOL)onManualAuthControlLogicError:(id)a0;
- (void)reportAction:(unsigned long long)a0;
- (void).cxx_destruct;

@end
