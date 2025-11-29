@interface PalmReportUtil : NSObject

+ (void)reportEncryptInfoWithSessionId:(id)a0 timeCost:(unsigned long long)a1 fileSize1:(unsigned long long)a2 fileSize2:(unsigned long long)a3;
+ (void)reportCdnUploadWithSessionId:(id)a0 errorCode:(int)a1 errorMsg:(id)a2 timeCost:(unsigned long long)a3 fileSize:(unsigned long long)a4 cdnFileId:(id)a5;
+ (void)reportVideoInfoWithSessionId:(id)a0 errorCode:(int)a1 errorMsg:(id)a2 fileSize:(unsigned long long)a3;
+ (void)reportCgiRequestRetWithSessionId:(id)a0 errorCode:(int)a1 errorMsg:(id)a2 timeCost:(unsigned long long)a3 extValue1:(id)a4;
+ (void)reportPalmResultWithSessionId:(id)a0 errorCode:(int)a1 errorMsg:(id)a2 timeCost:(unsigned long long)a3;
+ (void)reportGuidePopupInfoWithSessionId:(id)a0 showTime:(unsigned long long)a1 downloadCost:(unsigned long long)a2 closeReason:(id)a3;
+ (void)reportWePalmModelInfo:(id)a0 errorCode:(int)a1 errorMsg:(id)a2 isRewrite:(BOOL)a3;
+ (void)reportPalmIlogsInfo:(id)a0 errorCode:(int)a1 errorMsg:(id)a2 action:(id)a3 timeCost:(unsigned long long)a4 fileSize1:(unsigned long long)a5 fileSize2:(unsigned long long)a6 extValue1:(id)a7 extValue2:(id)a8 extValue3:(id)a9;

@end
