@class NSString;

@interface WebviewJSEventHandler_scanLicense : WebviewJSEventHandlerBase <JSApiScanLicenceViewControllerDelegate, PBMessageObserverDelegate, ScanLicenceBankCardNumberConfirmViewControllerDelegate> {
    unsigned long long _scanType;
    NSString *_scanTypeName;
    NSString *_displayCardNumber;
    NSString *_retJson;
    int _errCode;
    BOOL _bIsGetResult;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)FillBankNumCancel;
- (void)FillBankNumConfirmWithImage:(id)a0 cardNumber:(id)a1;
- (void)onReturnBtnClick;
- (void)didFindBankCardNumber:(id)a0 cardImage:(id)a1;
- (void)didFindCalibrateCardImage:(id)a0 cardType:(unsigned long long)a1;
- (id)getImageData:(id)a0 maxLength:(long long)a1;
- (void)getBankCardOK;
- (void)getCardOK;
- (void)getCardFail;
- (void)getCardCancel;
- (void)sendBizScanLicenseRequestWithImg:(id)a0 andType:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
