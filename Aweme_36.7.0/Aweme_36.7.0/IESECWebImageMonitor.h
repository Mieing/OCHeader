@interface IESECWebImageMonitor : NSObject

+ (void)trackLargeImageWithPerfLog:(id)a0;
+ (id)formatLogExtra:(id)a0;
+ (void)p_logImagePerf:(id)a0 logExtra:(id)a1;
+ (void)p_trackLargeImageExceptionWithPerfLog:(id)a0;
+ (BOOL)p_shouldtrackLargeImageExceptionWithPerfLog:(id)a0;
+ (void)trackImageRequestPerfLog:(id)a0 logExtra:(id)a1;
+ (void)trackImageTemplateTransformError:(id)a0 imageUrl:(id)a1 pattern:(id)a2;
+ (BOOL)checkWhiteListWithPerfLog:(id)a0;
+ (id)trackingQueue;

@end
