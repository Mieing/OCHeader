@interface AWEPayNFCPitayaTaskRunner : NSObject

+ (void)_aweLazyRegisterStaticLoad;
+ (void)runDCPredownloadTask;
+ (BOOL)disablePitayaPreDownload;
+ (double)pitayaPreDownloadDelayTime;
+ (void)p_runPTYPreDownloadTask;
+ (id)p_mpIDToSchema:(id)a0;

@end
