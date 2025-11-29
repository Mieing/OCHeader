@class MMVoidITransmitKvDataCallback, MMVoidCallback, NSString;

@interface MMKindaRealNameManagerImpl : NSObject <WCPayPrivacyViewControllerDelegate, WCPayRealnameVerifyLogicDelegate, MMKindaRealNameManager>

@property (retain, nonatomic) MMVoidITransmitKvDataCallback *privacyVCCallBack;
@property (retain, nonatomic) MMVoidCallback *realnameCancelCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startRealNameImpl:(id)a0 cancelCallback:(id)a1 data:(id)a2;
- (void)reportRealnameAction:(int)a0;
- (void)callPrivacyDutyPageImpl:(id)a0;
- (void)onWCPayPrivacyViewControllerClickAgree:(BOOL)a0 marketingSwitchClosed:(BOOL)a1;
- (void)goToRealNameInputUIImpl:(id)a0 cancelCallback:(id)a1 data:(id)a2;
- (void)realnameVerifyLogicDidFinishWithTinyAppUri:(id)a0;
- (void)startRealNameVerifyPhone:(id)a0;
- (void).cxx_destruct;

@end
