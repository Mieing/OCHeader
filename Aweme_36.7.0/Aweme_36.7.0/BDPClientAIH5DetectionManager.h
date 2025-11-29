@class NSString, BDPThreadSafeDictionary, NSDictionary, BDPAppPageURL, BDPUniqueID, BDPClientAIDetecionConfig;

@interface BDPClientAIH5DetectionManager : NSObject <BDPClientAIQRCodeDetectService, BDPClientAIDetectionMessage> {
    BOOL _hasRegisterQRCodeService;
    BDPUniqueID *_uniqueID;
    BDPThreadSafeDictionary *_detectionCacheDict;
    NSDictionary *_cacheStrategy;
    BDPAppPageURL *_currentPageURL;
    NSString *_deviceInfoJsonString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) BDPClientAIDetecionConfig *detectionConfig;

- (id)initService;
- (void)bdpDetection_updateSettingInfo:(id)a0 force:(BOOL)a1;
- (void)bdpDetection_updateDetectionInfo:(id)a0;
- (void)bdpDetection_applicationReadyToBootWithUniqueID:(id)a0 schema:(id)a1 launchParam:(id)a2;
- (void)bdpDetection_onAppRouteChangePageDidEnterWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)bdpDetection_onAppRouteChangePageWillLeaveWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2 needCheck:(BOOL)a3;
- (void)bdpDetection_PageWillLeave:(id)a0 duration:(double)a1 pageURL:(id)a2 uniqueID:(id)a3;
- (void)bdpDetection_applicationExitWithUniqueID:(id)a0;
- (void)bdpDetection_onAppRouteChangePageWillLeaveNotMPViewController:(id)a0 uniqueID:(id)a1;
- (void)registerQRCodeServiceIfNeeded;
- (void)detectQRCodeWithInputImage:(id)a0 pagePath:(id)a1 completion:(id /* block */)a2;
- (void)updatePornDetectionModelWithDetectionInfo:(id)a0;
- (void)releaseQRCodeService;
- (void).cxx_destruct;

@end
