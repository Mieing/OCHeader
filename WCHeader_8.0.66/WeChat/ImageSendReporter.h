@interface ImageSendReporter : NSObject

+ (void)reportAssetError:(long long)a0;
+ (void)reportUploadFailWithMsgStatError:(long long)a0 cdnError:(long long)a1;
+ (void)reportSendFailWithCgiError:(long long)a0;
+ (void)doReportWithErrorCode:(long long)a0 msgStatTaskError:(long long)a1 cdnErrorCode:(long long)a2 cgiErrorCode:(long long)a3 extraInfo:(id)a4;

@end
