@class NSString;

@interface AWEVisionCameraStudioProxyImpl : HTSService <AWEVisionCameraStudioProxy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)classScanABConfigStudioProxy;
+ (Class)classVisionCommonToolsStudioProxy;
+ (Class)classVisionProviderStudioProxy;
+ (Class)classScanSwitchModeManagerStudioProxy;
+ (Class)classScanQRCodeJumpContextStudioProxy;
+ (Class)classScanJumpSearchPageContextStudioProxy;
+ (Class)classScanResultDataManagerStudioProxy;
+ (Class)classXScreenAdaptManagerStudioProxy;

- (id)scanABConfigStudioProxy;
- (id)visionCameraGlobalDataModelStudioProxy;
- (id)visionCommonToolsStudioProxy;
- (id)visionPhotoToolsStudioProxy;
- (id)visionProviderStudioProxy;
- (id)scanSwitchModeManagerStudioProxy;
- (id)multiCodeMiddleViewControllerStudioProxy;
- (id)scanModeTrackIdPerformanceTimestampStudioProxy;
- (id)cameraScanQRCodePerformanceTimestampStudioProxy;
- (id)photoScanQRCodePerformanceTimestampStudioProxy;
- (id)visionCameraPerformanceTimestampStudioProxy;
- (id)scanQRCodeMaskViewStudioProxy;
- (id)scanQuestionMaskViewStudioProxy;
- (id)scanNoResultTipsViewStudioProxy;
- (id)scanObjectTagViewStudioProxy;
- (id)scanScanMaskViewStudioProxy;
- (id)scanQRCodeJumpContextStudioProxy;
- (id)scanJumpSearchPageContextStudioProxy;
- (id)scanResultDataManagerStudioProxy;
- (id)switchRecordModeViewConfigStudioProxy;
- (id)switchRecordModeViewStudioProxy;
- (id)xScreenAdaptManagerStudioProxy;
- (id)createWithSupportQrCode:(BOOL)a0;
- (id)init;

@end
