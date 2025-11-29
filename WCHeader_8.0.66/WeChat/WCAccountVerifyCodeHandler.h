@class NSString, WCAccountBaseControlLogic, WCAccountBindPhoneForRegCGI, WCAccountControlData;
@protocol WCAccountVerifyCodeHandlerDelegate;

@interface WCAccountVerifyCodeHandler : NSObject <WCAccountBindPhoneForRegCGIDelegate, DialCodeHalfScreenViewControllerDelegate> {
    WCAccountBaseControlLogic<WCAccountVerifyCodeHandlerDelegate> *_delegate;
    WCAccountControlData *m_data;
    WCAccountBindPhoneForRegCGI *_modelLogic;
    BOOL _bNeedSetPwd;
    unsigned int m_uiCheckVerifyUpCount;
    unsigned int _uiTryCount;
}

@property (retain, nonatomic) NSString *phoneNumberWithCC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0 Delegate:(id)a1;
- (void)startCheckNumberStatusAndLoading;
- (void)startCheckVerifyCode:(id)a0;
- (BOOL)checkVerifyCode:(id)a0;
- (BOOL)checkPhoneNumberStatus:(unsigned int)a0;
- (void)getVoiceVerifyCode:(id)a0;
- (BOOL)getVoiceVerifyCodeReady:(id)a0;
- (void)getVerifyCode;
- (BOOL)getVerifyCodeReady;
- (void)cancelAllEvent;
- (void)startVerifyUpAndLoading;
- (id)getRegSessionID;
- (void)onCheckLoginPhoneNumberStatus:(id)a0 StyleKeyValue:(id)a1 Response:(id)a2;
- (void)onGetLoginVerifyCode:(id)a0 StyleKeyValue:(id)a1 Response:(id)a2;
- (void)onGetVerifyCode:(id)a0 StyleKeyValue:(id)a1 Response:(id)a2;
- (void)onCheckLoginVerifyCode:(id)a0 StyleKeyValue:(id)a1 Response:(id)a2;
- (void).cxx_destruct;

@end
