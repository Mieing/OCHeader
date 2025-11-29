@class NSString, BDPThreadSafeDictionary, BDPClientAIDetecionConfig, BDPUniqueID;

@interface BDPClientAIConsistencyDetectionManager : NSObject <BDPClientAIDetectionMessage> {
    BDPThreadSafeDictionary *_detectionCacheDict;
    BDPUniqueID *_uniqueID;
}

@property (retain, nonatomic) BDPClientAIDetecionConfig *detectionConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bdpDetection_updateSettingInfo:(id)a0 force:(BOOL)a1;
- (void)bdpDetection_updateDetectionInfo:(id)a0;
- (void)bdpDetection_onAppRouteChangePageDidEnterWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)bdpDetection_onAppRouteChangePageWillLeaveWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2 needCheck:(BOOL)a3;
- (void)bdpDetection_PageWillLeave:(id)a0 duration:(double)a1 pageURL:(id)a2 uniqueID:(id)a3;
- (void)trackTecnicaWithError:(id)a0 inputparam:(id)a1 success:(BOOL)a2 isConsistency:(BOOL)a3 outputResult:(id)a4 startTime:(double)a5 isLocalExist:(BOOL)a6 packageVersion:(id)a7 pageURL:(id)a8;
- (void)reportDetectionEventWithStrategy:(id)a0 error:(id)a1 isConsistency:(BOOL)a2 outputResult:(id)a3 startTime:(double)a4 failRules:(id)a5 inputparam:(id)a6 success:(BOOL)a7 isLocalExist:(BOOL)a8 packageVersion:(id)a9 pageURL:(id)a10;
- (void)trackBusinessDetectionEventWithStrategy:(id)a0 error:(id)a1 isConsistency:(BOOL)a2 outputResult:(id)a3 startTime:(double)a4 failRules:(id)a5 pageURL:(id)a6;
- (void).cxx_destruct;
- (id)init;

@end
