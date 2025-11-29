@class NSString, BDPAppPageURL, BDPThreadSafeDictionary, BDPClientAIDetecionConfig, BDPUniqueID;

@interface BDPClientAICommercializeManager : NSObject <BDPClientAIDetectionMessage> {
    BDPThreadSafeDictionary *_detectionCacheDict;
    BDPUniqueID *_uniqueID;
}

@property (readonly, nonatomic) BDPAppPageURL *page;
@property (retain, nonatomic) BDPClientAIDetecionConfig *detectionConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bdpDetection_updateSettingInfo:(id)a0 force:(BOOL)a1;
- (void)bdpDetection_updateDetectionInfo:(id)a0;
- (void)bdpDetection_onAppRouteChangePageWillLeaveWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2 needCheck:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;

@end
