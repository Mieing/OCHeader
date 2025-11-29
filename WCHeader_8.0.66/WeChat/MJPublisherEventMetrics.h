@class NSString, MJMetricsCustomContent;

@interface MJPublisherEventMetrics : WXPBGeneratedMessage

@property (nonatomic) int metricsType;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *entryType;
@property (retain, nonatomic) NSString *maasVersion;
@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) MJMetricsCustomContent *details;
@property (nonatomic) int enterScene;
@property (retain, nonatomic) NSString *postId;

+ (void)initialize;

@end
