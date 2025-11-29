@interface AWEVisionTrackManager : NSObject

+ (void)trackQrCodeScanEnterWithGlobalDataModel:(id)a0;
+ (void)trackQrCodeScanEnterVisualWithGlobalDataModel:(id)a0;
+ (void)trackCameraPerformanceWithGlobalDataModel:(id)a0 performanceTool:(id)a1;
+ (void)trackExitRecordPageWithType:(id)a0 isQrCode:(BOOL)a1 globalDataModel:(id)a2;
+ (void)trackClickRecordRealityWithGlobalDataModel:(id)a0;
+ (void)trackClickAlbumEntranceWithGlobalDataModel:(id)a0;
+ (void)trackEnterScanHistoryPageWithGlobalDataModel:(id)a0;
+ (void)trackClickFlashLightIsPermanent:(BOOL)a0 globalDataModel:(id)a1;
+ (void)trackQrCodeIdentifyWithCodeNum:(unsigned long long)a0 enterMethod:(id)a1 globalDataModel:(id)a2;
+ (void)trackChooseUploadContentWithGlobalDataModel:(id)a0;
+ (void)trackEnterAlbumPageWithGlobalDataModel:(id)a0;

@end
