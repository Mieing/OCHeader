@class BDPThreadSafeDictionary;

@interface BDPEvidenceCenter : NSObject

@property (retain, nonatomic) BDPThreadSafeDictionary *recordMap;
@property (retain, nonatomic) BDPThreadSafeDictionary *pageInfoDict;
@property (retain, nonatomic) BDPThreadSafeDictionary *reqLimitDict;

+ (BOOL)indicatorEvidenceIsEnable:(long long)a0;
+ (BOOL)hasDeviceQuotaInCache:(id)a0;
+ (BOOL)allowEvidenceAfterFilter:(id)a0 type:(long long)a1;
+ (BOOL)allowEvidenceAfterQuotaReqLimit:(id)a0;
+ (void)collectEvidenceWithUniqueID:(id)a0 model:(id)a1;
+ (void)p_trackEvidenceWithUniqueID:(id)a0 model:(id)a1 isConfirmed:(BOOL)a2 isSubmit:(BOOL)a3 isTunnel:(BOOL)a4;
+ (void)p_submitEvidenceWithUniqueID:(id)a0 model:(id)a1 completion:(id /* block */)a2;
+ (void)p_showAlertWithUniqueID:(id)a0 model:(id)a1;
+ (void)p_cacheDeviceQuotaInfo:(id)a0;
+ (void)p_cacheQuotaReqInfo:(id)a0;
+ (void)p_snapshotWithWebView:(id)a0 completion:(id /* block */)a1;
+ (void)p_getScreenshotQuotaWithUniqueID:(id)a0 model:(id)a1 Completion:(id /* block */)a2;
+ (id)p_keyWithDeviceID:(id)a0;
+ (void)p_videoErrorEvidenceWithUniqueID:(id)a0 params:(id)a1;
+ (void)p_componentErrorEvidenceWithUniqueID:(id)a0 params:(id)a1;
+ (void)p_industryPlayletErrorEvidenceWithUniqueID:(id)a0 params:(id)a1;
+ (void)p_showToastWithUniqueID:(id)a0 message:(id)a1;
+ (id)p_alertControllerWithImage:(id)a0 callback:(id /* block */)a1;
+ (id)p_commonBodyParams:(id)a0;
+ (id)p_commonRequestHeaders:(id)a0;
+ (void)p_uploadEvidenceImage:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
+ (void)collectVideoEvidenceWithUniqueID:(id)a0 event:(id)a1 params:(id)a2;
+ (void)submitSnapshotIfNeeded:(id)a0 pagePath:(id)a1 exceptionType:(long long)a2;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
