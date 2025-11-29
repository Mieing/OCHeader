@class NSString, MJMetricsCustomContent;

@interface MJPublisherMCTaskMetrics : WXPBGeneratedMessage

@property (nonatomic) int metricsType;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *entryType;
@property (retain, nonatomic) NSString *maasVersion;
@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *taskName;
@property (nonatomic) long long beginTimeStamp;
@property (nonatomic) long long totalDurationMs;
@property (retain, nonatomic) NSString *endReason;
@property (retain, nonatomic) NSString *assetOriginType;
@property (retain, nonatomic) MJMetricsCustomContent *details;
@property (retain, nonatomic) MJMetricsCustomContent *extDetails0;
@property (nonatomic) int enterScene;
@property (retain, nonatomic) NSString *postId;

+ (void)initialize;

@end
