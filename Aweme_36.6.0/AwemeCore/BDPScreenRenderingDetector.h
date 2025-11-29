@interface BDPScreenRenderingDetector : NSObject

+ (void)snapshotWithWebView:(id)a0 detectionModel:(id)a1 completion:(id /* block */)a2;
+ (void)detectScreenWithView:(id)a0 detectionModel:(id)a1;
+ (void)detectScreenWithWebView:(id)a0 detectionModel:(id)a1;
+ (BOOL)p_isSnapshotEnabled:(id)a0;
+ (void)p_collectEvidenceWithModel:(id)a0 image:(id)a1 detectionResultModel:(id)a2;
+ (void)p_cleanWarmCacheIfNeeded:(id)a0 resultModel:(id)a1;
+ (void)p_collectDiagnosisInfoIfNeeded:(id)a0 model:(id)a1 resultModel:(id)a2;
+ (void)p_handleTrackerEventsWithDetectionModel:(id)a0 resultModel:(id)a1;
+ (void)p_submitEvidenceIfNeeded:(id)a0 resultModel:(id)a1;
+ (void)p_detectScreenWithImage:(id)a0 detectionModel:(id)a1 completion:(id /* block */)a2;
+ (void)p_handleVideoTrackerEventsWithDetectionModel:(id)a0 resultModel:(id)a1;
+ (id)trackerParamsForTea:(id)a0 resultModel:(id)a1;
+ (id)trackerParamsForPageTimeLine:(id)a0 resultModel:(id)a1;
+ (id)p_partialBlankDetectConfig;
+ (void)p_detectPartialBlankScreenWithImage:(id)a0 detectionModel:(id)a1 completion:(id /* block */)a2;
+ (void)p_detectClassifyScreenWithImage:(id)a0 detectionModel:(id)a1 completion:(id /* block */)a2;
+ (void)p_detectBlankScreenWithImage:(id)a0 detectionModel:(id)a1 completion:(id /* block */)a2;
+ (BOOL)p_isBlankDetectionEnabled:(id)a0;
+ (BOOL)p_isBlankImageUploadEnabled:(id)a0;
+ (void)p_uploadImage:(id)a0 model:(id)a1 resourceTag:(id)a2 completion:(id /* block */)a3;
+ (BOOL)p_isPartialBlankDetectionEnabled:(id)a0;
+ (BOOL)p_isPartialBlankImageUploadEnabled:(id)a0;
+ (BOOL)p_isClassifyDetectionEnabled:(id)a0;
+ (BOOL)p_isClassifyDetectImageUploadEnabled:(id)a0;
+ (id)snapshotForView:(id)a0;

@end
