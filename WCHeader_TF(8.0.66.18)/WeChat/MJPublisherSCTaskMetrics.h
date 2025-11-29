@class NSString, MJMetricsCustomContent;

@interface MJPublisherSCTaskMetrics : WXPBGeneratedMessage

@property (nonatomic) int metricsType;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *entryType;
@property (retain, nonatomic) NSString *maasVersion;
@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *taskName;
@property (nonatomic) long long beginTimeStamp;
@property (nonatomic) long long totalDurationMs;
@property (retain, nonatomic) NSString *endReason;
@property (retain, nonatomic) NSString *templateId;
@property (nonatomic) long long templateIndex;
@property (retain, nonatomic) NSString *templateSelectReason;
@property (retain, nonatomic) NSString *camSource;
@property (retain, nonatomic) MJMetricsCustomContent *details;
@property (nonatomic) int enterScene;
@property (retain, nonatomic) NSString *postId;

+ (void)initialize;

@end
