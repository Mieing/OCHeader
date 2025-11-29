@class ACCPhotoScanQRCodePerformanceTimestamp, NSString, UIImage, ACCScanPhotoServiceImp, UIView, AWEVideoPublishViewModel;
@protocol ACCTextLoadingViewProtcol;

@interface ACCScanPhotoScanContext : NSObject <VEScanDelegate>

@property (retain, nonatomic) ACCScanPhotoServiceImp *scanImp;
@property (copy, nonatomic) id /* block */ scanResultCompleted;
@property (copy, nonatomic) id /* block */ qrCodeScanResultCompleted;
@property (copy, nonatomic) id /* block */ scanAnythingResultCompleted;
@property (retain, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;
@property (nonatomic) BOOL handleCancelLoading;
@property (nonatomic) BOOL alreadyJump;
@property (nonatomic) double begainScanPictureInterval;
@property (weak, nonatomic) UIImage *scanImage;
@property (nonatomic) unsigned long long scanImageType;
@property (copy, nonatomic) id /* block */ qrcodeDetectCompleted;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL isMultiCodeAlgorithm;
@property (retain, nonatomic) ACCPhotoScanQRCodePerformanceTimestamp *scanQRCodePerformanceTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onRecCaptureFrameEventFromScan:(id)a0;
- (void)scan:(id)a0 onRecCaptureSessionEvent:(unsigned long long)a1;
- (void)scan:(id)a0 onScanCompleteWithQRCodeResult:(id)a1;
- (void)scan:(id)a0 onQrcodeDetectResult:(id)a1;
- (void)scan:(id)a0 onScanShakeResult:(id)a1;
- (void)scan:(id)a0 onScanDefinitionResult:(id)a1;
- (void)scan:(id)a0 onScanEditCompleteResult:(id)a1;
- (void)scan:(id)a0 onScanResult:(id)a1;
- (void)pictureQrcodeScanMonitor:(id)a0;
- (id)startQrCodeScanWithImage:(id)a0 supportMulti:(BOOL)a1 showLoading:(BOOL)a2;
- (void)startQrCodeScanWithImage:(id)a0 showLoading:(BOOL)a1 completed:(id /* block */)a2;
- (void)scanImageWithImage:(id)a0 showLoading:(BOOL)a1 showView:(id)a2 scanType:(unsigned long long)a3;
- (void)scanImageWithImage:(id)a0 showView:(id)a1 completed:(id /* block */)a2;
- (void)scanResultRouterWithQrCodeResult:(id)a0 anythingResult:(id)a1;
- (void)detectIsQrcodeShowLoading;
- (void)pictureQrcodeDetectMonitor:(BOOL)a0;
- (void)exitRecordPageSendTrackWithType:(id)a0;
- (void)pictureScanMonitor:(id)a0;
- (void)scanImageWithImage:(id)a0 completed:(id /* block */)a1;
- (void)startOnlyScanAnythingWithImage:(id)a0 showView:(id)a1 completed:(id /* block */)a2;
- (void)startQrCodeScanWithImage:(id)a0 completed:(id /* block */)a1;
- (BOOL)supportQrcodeDetect;
- (void)startQrcodeDetectScanWithImage:(id)a0 detectCompleted:(id /* block */)a1 scanCompleted:(id /* block */)a2;
- (void).cxx_destruct;

@end
