@interface WSReportHelper : NSObject

+ (void)ReportWSLoadH5Fail;
+ (void)ReportUnRecognizedJSApi;
+ (void)ReportWSLoadRecommendH5Fail;
+ (void)ReportAccessTopicSearchDownloadH5;
+ (void)reportPreviewWebviewAction:(unsigned long long)a0 biz:(unsigned long long)a1 timecost:(unsigned long long)a2;
+ (void)reportRtnBackEvent:(int)a0 scene:(unsigned int)a1 ishomepage:(BOOL)a2 query:(id)a3;
+ (void)reportVoiceSearchEvent:(int)a0 sessionid:(id)a1 subSessionid:(id)a2 query:(id)a3 scene:(unsigned int)a4 isNavVoice:(BOOL)a5;
+ (void)reportVoiceSearchEvent:(int)a0 sessionid:(id)a1 subSessionid:(id)a2 query:(id)a3 scene:(unsigned int)a4 isNavVoice:(BOOL)a5 exposeId:(id)a6;
+ (void)report15808Log:(unsigned int)a0 actionType:(int)a1;
+ (BOOL)IsWebRecommendPublishId:(id)a0;
+ (void)ReportWebRecommendFeedsForSystemError:(id)a0 nsUrl:(id)a1;
+ (void)ReportWebRecommendFeedsLoadSuccess;
+ (void)ReportWebRecommendFeedsWKWebViewTerminateForeground:(id)a0;
+ (void)ReportWebRecommendFeedsWKWebViewTerminateBackground:(id)a0;

@end
