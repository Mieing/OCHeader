@class NSString, ScanQRCodeLogicController;

@interface LocalJSEventHandler_startAdQRScan : LocalJSEventHandler_BaseEvent <MMImageLoaderObserver, BaseScanLogicDelegate>

@property (retain, nonatomic) NSString *scanUrl;
@property (retain, nonatomic) NSString *uxInfo;
@property (retain, nonatomic) ScanQRCodeLogicController *scanQRCodeLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)handleJSEvent:(id)a0;
- (void)startToScanQRCodeWithUrl:(id)a0;
- (void)startToScanQRCodeWithImage:(id)a0;
- (id)genEncKeyWithUxInfo:(id)a0 url:(id)a1;
- (unsigned long long)getQRResultType;
- (BOOL)isQRResultTypeAvailable:(unsigned long long)a0;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void)onScanEnds;
- (void)didShowScanResult;
- (void)doScanReportWithResult:(int)a0 qrResultType:(unsigned long long)a1 qrResultUrl:(id)a2;
- (void).cxx_destruct;

@end
