@class BDPClientAIDetectionModel, NSDictionary, NSString, BDPClientAIDetecionConfig;

@interface BDPClientAIAdDetectionManager : NSObject <BDPClientAIDetectionMessage>

@property (retain, nonatomic) BDPClientAIDetectionModel *currentDetectionModel;
@property (retain, nonatomic) NSDictionary *adTextFeaturesDict;
@property (retain, nonatomic) BDPClientAIDetecionConfig *detectionConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_trackTecnicaWithError:(id)a0 result:(BOOL)a1 uniqueID:(id)a2;
- (void)p_checkAdTextHitInfoWithEncryptText:(id)a0 originalText:(id)a1 adWordDict:(id)a2 threshold:(long long)a3 pageID:(long long)a4 uniqueID:(id)a5 pageURL:(id)a6;
- (void)bdpDetection_updateSettingInfo:(id)a0 force:(BOOL)a1;
- (void)bdpDetection_updateDetectionInfo:(id)a0;
- (void)bdpDetection_onAppRouteChangePageWillLeaveWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2 needCheck:(BOOL)a3;
- (void)bdpDetection_PageWillLeave:(id)a0 duration:(double)a1 pageURL:(id)a2 uniqueID:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
