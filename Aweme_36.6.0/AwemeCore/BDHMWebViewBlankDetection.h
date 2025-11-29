@interface BDHMWebViewBlankDetection : NSObject

+ (void)_preActionOfBlankDetectionImage:(id)a0 detectionModel:(id)a1 resultModel:(id)a2 group:(id)a3;
+ (void)_blankEventWithPerfDic:(id)a0 detectionModel:(id)a1 detecionResultModel:(id)a2;
+ (void)snapshotWithWebView:(id)a0 detectionModel:(id)a1 completion:(id /* block */)a2;
+ (void)_fetchBlankDetectionResultWithImage:(id)a0 completionBlock:(id /* block */)a1;
+ (void)blankDetectionWithWebView:(id)a0 detectionModel:(id)a1;

@end
