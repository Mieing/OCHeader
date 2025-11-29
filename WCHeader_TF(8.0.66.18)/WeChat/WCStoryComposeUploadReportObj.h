@class NSString;

@interface WCStoryComposeUploadReportObj : NSObject

@property (nonatomic) unsigned long long composeTime;
@property (nonatomic) unsigned long long composeErrorType;
@property (nonatomic) unsigned long long uploadTime;
@property (nonatomic) unsigned long long uploadErrorType;
@property (copy, nonatomic) NSString *composeErrorTypeStr;
@property (copy, nonatomic) NSString *uploadErrorTypeStr;

+ (void)reportComposeFailedWithStartTime:(unsigned long long)a0 errorType:(long long)a1;
+ (void)reportUploadFailedWithStartTime:(unsigned long long)a0 errorType:(long long)a1;

- (void)reportComposeUploadFailed;
- (void).cxx_destruct;

@end
