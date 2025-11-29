@class NSString, RingToneDetail;

@interface RingToneRecommendReporter_23604 : KvReportBaseItem

@property (nonatomic) unsigned long long pageKeepTimeStamp;
@property (nonatomic) unsigned long long startPlayRingTimeStamp;
@property (retain, nonatomic) RingToneDetail *playingRingTone;
@property (copy, nonatomic) NSString *feedID;
@property (nonatomic) unsigned long long feedType;
@property (nonatomic) unsigned long long exposureCount;
@property (nonatomic) unsigned long long evnetCode;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *searchKeyword;
@property (nonatomic) unsigned int previewTimeMs;
@property (nonatomic) unsigned int chooseTimeMs;
@property (nonatomic) unsigned long long usageRange;
@property (copy, nonatomic) NSString *friendName;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long setType;
@property (nonatomic) unsigned long long channel;
@property (nonatomic) unsigned long long vibrateType;
@property (nonatomic) unsigned long long recommendReasonType;
@property (nonatomic) unsigned long long cmdID;
@property (nonatomic) unsigned long long lastExposureCount;
@property (nonatomic) BOOL reportedExposed;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) unsigned long long isVedioStream;
@property (copy, nonatomic) NSString *extrainfo;

- (unsigned int)reportNSStringPreprocessType;
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (void)doReport;
- (void)doReportImmediately;
- (void)startPageKeepTimer;
- (void)reportExposedFirstRing:(id)a0 exposedCount:(unsigned int)a1 eventType:(unsigned long long)a2;
- (void)reportPlayRing:(id)a0 eventType:(unsigned long long)a1;
- (void)reportEventCodeOnly:(unsigned long long)a0 reset:(BOOL)a1;
- (void)reportStopPlayRing;
- (void).cxx_destruct;

@end
