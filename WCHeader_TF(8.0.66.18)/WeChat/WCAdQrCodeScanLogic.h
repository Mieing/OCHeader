@class NSString, ScanQRCodeLogicController, WCAdQrCodeScanInfo, WCAdvertiseInfo;

@interface WCAdQrCodeScanLogic : NSObject <WCCanvasImageLoaderObserver, BaseScanLogicDelegate>

@property (retain, nonatomic) WCAdQrCodeScanInfo *qrCodeScanInfo;
@property (retain, nonatomic) WCAdvertiseInfo *adInfo;
@property (retain, nonatomic) NSString *snsId;
@property (nonatomic) int scene;
@property (nonatomic) int subScene;
@property (copy, nonatomic) id /* block */ scanResultBlock;
@property (nonatomic) BOOL qrCodeProcessing;
@property (retain, nonatomic) ScanQRCodeLogicController *scanQRCodeLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)tryToScanQrCode:(id)a0 adInfo:(id)a1 snsId:(id)a2 scene:(int)a3 subScene:(int)a4 showLoading:(BOOL)a5 scanResultBlock:(id /* block */)a6;
- (void)scanQRCodeWithImage:(id)a0;
- (id)genEncKey;
- (unsigned long long)getAdQRResultType;
- (unsigned long long)getSearchContactScene;
- (void)showLoading;
- (void)hideLoading;
- (void)setQrCodeProcessing;
- (void)setQrCodeProcessManualFinished;
- (void)setQrCodeProcessAutoFinished;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void)onScanEnds;
- (void)didShowScanResult;
- (void)doQRScanReport;
- (void).cxx_destruct;

@end
