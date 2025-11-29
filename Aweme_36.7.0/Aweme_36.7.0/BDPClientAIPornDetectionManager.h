@class NSString, BDPThreadSafeDictionary, NSDictionary, BDPAppPageURL, BDPClientAIDetecionConfig, BDPUniqueID;

@interface BDPClientAIPornDetectionManager : NSObject <BDPClientAIPornDetectService, BDPClientAIDetectionMessage> {
    BDPThreadSafeDictionary *_detectionCacheDict;
    NSDictionary *_cacheStrategy;
    NSString *_deviceInfoJsonString;
    BDPAppPageURL *_currentPageURL;
    BDPUniqueID *_uniqueID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) BDPClientAIDetecionConfig *detectionConfig;

- (id)initService;
- (id)businessScene;
- (void)bdpDetection_updateSettingInfo:(id)a0 force:(BOOL)a1;
- (void)bdpDetection_updateDetectionInfo:(id)a0;
- (void)bdpDetection_applicationReadyToBootWithUniqueID:(id)a0 schema:(id)a1 launchParam:(id)a2;
- (void)bdpDetection_onAppRouteChangePageDidEnterWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)bdpDetection_onAppRouteChangePageWillLeaveWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2 needCheck:(BOOL)a3;
- (void)bdpDetection_PageWillLeave:(id)a0 duration:(double)a1 pageURL:(id)a2 uniqueID:(id)a3;
- (void)bdpDetection_onAppRouteChangePageWillLeaveNotMPViewController:(id)a0 uniqueID:(id)a1;
- (BOOL)needCheckQRCode;
- (id)qrCodeDetectMatchContent;
- (BOOL)needQRCodeDetectCapture;
- (void)updatePornDetectionModelWithDetectionInfo:(id)a0;
- (void).cxx_destruct;

@end
