@interface CdnServiceReporter : NSObject

+ (void)ReportWhenStartDownloadErrorWithRequest:(void *)a0 errorCode:(int)a1;
+ (void)ReportWhenDownloadErrorWithRequest:(void *)a0 errorCode:(int)a1;
+ (void)ReportWhenStartUploadErrorWithRequest:(void *)a0 errorCode:(int)a1;
+ (void)ReportWhenUploadErrorWithRequest:(void *)a0 errorCode:(int)a1;
+ (void)ReportCdnServiceErrorWithRequestFileType:(int)a0 appType:(int)a1 errorCode:(int)a2 fileKey:(id)a3 reportType:(int)a4;

@end
