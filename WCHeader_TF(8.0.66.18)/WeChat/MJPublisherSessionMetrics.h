@class NSString, MJMetricsCustomContent;

@interface MJPublisherSessionMetrics : WXPBGeneratedMessage

@property (nonatomic) int metricsType;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *entryType;
@property (retain, nonatomic) NSString *maasVersion;
@property (nonatomic) long long beginTimeStamp;
@property (nonatomic) long long totalDurationMs;
@property (retain, nonatomic) NSString *endReason;
@property (retain, nonatomic) NSString *lastViewId;
@property (retain, nonatomic) NSString *lastStateId;
@property (nonatomic) long long visitedViews;
@property (nonatomic) long long visitedStates;
@property (nonatomic) long long metricsVersion;
@property (nonatomic) long long firstImpressionTimeCostMs;
@property (nonatomic) long long totalDownloadBytes;
@property (nonatomic) long long validationCode;
@property (retain, nonatomic) NSString *resultOriginType;
@property (retain, nonatomic) MJMetricsCustomContent *resultInfoMedia;
@property (retain, nonatomic) MJMetricsCustomContent *resultInfoSc;
@property (retain, nonatomic) MJMetricsCustomContent *resultInfoMc;
@property (retain, nonatomic) MJMetricsCustomContent *scMetrics;
@property (retain, nonatomic) MJMetricsCustomContent *scPreload;
@property (retain, nonatomic) MJMetricsCustomContent *scPreviewPref;
@property (retain, nonatomic) MJMetricsCustomContent *scRecordPref;
@property (nonatomic) int enterScene;
@property (nonatomic) int parentEnterScene;
@property (retain, nonatomic) MJMetricsCustomContent *mcMetrics;
@property (retain, nonatomic) MJMetricsCustomContent *resultInfoMcMaterial;
@property (retain, nonatomic) MJMetricsCustomContent *startupOptions;
@property (retain, nonatomic) NSString *postId;

+ (void)initialize;

@end
