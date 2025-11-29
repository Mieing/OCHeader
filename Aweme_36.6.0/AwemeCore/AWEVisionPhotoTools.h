@class NSString, UIImage, ACCScanPhotoServiceImp, UIView;
@protocol AWEVisionCameraGlobalDataModelStudioProxy, ACCTextLoadingViewProtcol, ACCPhotoScanQRCodePerformanceTimestampStudioProxy;

@interface AWEVisionPhotoTools : NSObject <VEScanDelegate, AWEVisionPhotoToolsStudioProxy>

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
@property (weak, nonatomic) id<AWEVisionCameraGlobalDataModelStudioProxy> globalData;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL isMultiCodeAlgorithm;
@property (retain, nonatomic) id<ACCPhotoScanQRCodePerformanceTimestampStudioProxy> scanQRCodePerformanceTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pictureQrcodeScanMonitor:(id)a0;
- (id)startQrCodeScanWithImage:(id)a0 supportMulti:(BOOL)a1 showLoading:(BOOL)a2;
- (void)startQrCodeScanWithImage:(id)a0 showLoading:(BOOL)a1 completed:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
