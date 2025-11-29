@interface AWEVisionCameraStudioProxyWrapper : NSObject

@property (class, retain, nonatomic) Class classScanABConfigStudioProxy;
@property (class, retain, nonatomic) Class classVisionCommonToolsStudioProxy;
@property (class, retain, nonatomic) Class classVisionProviderStudioProxy;
@property (class, retain, nonatomic) Class classScanSwitchModeManagerStudioProxy;
@property (class, retain, nonatomic) Class classScanQRCodeJumpContextStudioProxy;
@property (class, retain, nonatomic) Class classScanJumpSearchPageContextStudioProxy;
@property (class, retain, nonatomic) Class classScanResultDataManagerStudioProxy;
@property (class, retain, nonatomic) Class classXScreenAdaptManagerStudioProxy;

+ (Class)classScanABConfigStudioProxy;
+ (Class)classVisionCommonToolsStudioProxy;
+ (Class)classVisionProviderStudioProxy;
+ (Class)classScanSwitchModeManagerStudioProxy;
+ (Class)classScanQRCodeJumpContextStudioProxy;
+ (Class)classScanJumpSearchPageContextStudioProxy;
+ (Class)classScanResultDataManagerStudioProxy;
+ (Class)classXScreenAdaptManagerStudioProxy;
+ (BOOL)enableStudioProxy;
+ (id)sharedInstance;

- (id)createWithSupportQrCode:(BOOL)a0;
- (BOOL)enableStudioProxy;
- (id)createScanABConfigStudioProxy;
- (id)createGlobalDataModelStudioProxy;
- (id)createCommonToolsStudioProxy;
- (id)createPhotoToolsStudioProxy;
- (id)createVisionProviderStudioProxy;
- (id)createScanSwitchModeManagerStudioProxy;
- (id)createMultiCodeMiddleViewControllerStudioProxy;
- (id)createScanModeTrackIdPerformanceTimestampStudioProxy;
- (id)createCameraScanQRCodePerformanceTimestampStudioProxy;
- (id)createPhotoScanQRCodePerformanceTimestampStudioProxy;
- (id)createVisionCameraPerformanceTimestampStudioProxy;
- (id)createScanQRCodeMaskViewStudioProxy;
- (id)createScanQuestionMaskViewStudioProxy;
- (id)createScanNoResultTipsViewStudioProxy;
- (id)createScanObjectTagViewStudioProxy;
- (id)createScanScanMaskViewStudioProxy;
- (id)createScanQRCodeJumpContextStudioProxy;
- (id)createScanJumpSearchPageContextStudioProxy;
- (id)createScanResultDataManagerStudioProxy;
- (id)createSwitchRecordModeViewConfigStudioProxy;
- (id)createSwitchRecordModeViewStudioProxy;
- (id)createXScreenAdaptManagerStudioProxy;

@end
