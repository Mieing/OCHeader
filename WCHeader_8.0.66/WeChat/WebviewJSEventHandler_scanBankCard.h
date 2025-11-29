@class NSString, NSData, JSEvent;

@interface WebviewJSEventHandler_scanBankCard : WebviewJSEventHandlerBase <IWebviewResourceManagerExt, WCPayCardNumberScanDelegate>

@property (retain, nonatomic) NSString *trueName;
@property (retain, nonatomic) NSString *scanResult;
@property (retain, nonatomic) NSString *encryptedStr;
@property (retain, nonatomic) NSData *scanImageData;
@property (retain, nonatomic) NSString *certPem;
@property (retain, nonatomic) NSString *baseRequest;
@property (retain, nonatomic) JSEvent *cbEvent;
@property (nonatomic) BOOL useHttp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)startScan;
- (void)didFindCardNumber:(id)a0 cardImage:(id)a1 scanResult:(id)a2;
- (void)clickCloseButton:(id)a0;
- (void)clickHandInput;
- (id)fillResult:(id)a0 err_code:(id)a1 scanResult:(id)a2;
- (void)reportMode:(unsigned long long)a0 action:(unsigned long long)a1;
- (void).cxx_destruct;

@end
