@class NSString;

@interface TTAccountBadgerReportContext : NSObject

@property (nonatomic) long long badgerScene;
@property (nonatomic) long long collectMode;
@property (copy, nonatomic) NSString *loginLogId;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *triggerStage;
@property (copy, nonatomic) NSString *collectStage;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) long long timeout;
@property (copy, nonatomic) NSString *logId;
@property (copy, nonatomic) NSString *challengeOriginKey;
@property (copy) NSString *challengeKey;
@property (nonatomic) BOOL isFinishFullCollect;
@property long long collectDuration;
@property (nonatomic) long long frequencyControlInterval;
@property (nonatomic) BOOL isReportPreStage;
@property long long updateCollectResult;
@property (copy) NSString *collectErrorMessage;
@property (nonatomic) double immediatelyReportTime;
@property (nonatomic) double fullReportTime;
@property (nonatomic) BOOL isEnterCallback;
@property (nonatomic) long long retryUploadReportTime;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)init;

@end
