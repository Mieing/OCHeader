@interface GameURLSessionStatistics : NSObject

@property (nonatomic) unsigned int normalReqCount;
@property (nonatomic) unsigned int normalSucCount;
@property (nonatomic) unsigned int normalFailCount;
@property (nonatomic) unsigned int normalAvgRTT;
@property (nonatomic) unsigned int simpleReqCount;
@property (nonatomic) unsigned int simpleSucCount;
@property (nonatomic) unsigned int simpleFailCount;
@property (nonatomic) unsigned int simpleAvgRTT;
@property (nonatomic) unsigned int dnsErrorCount;
@property (nonatomic) unsigned int normalRetryCount;
@property (nonatomic) unsigned int simpleRetryCount;
@property (nonatomic) unsigned int retrySucCount;
@property (nonatomic) unsigned int certErrorCount;
@property (nonatomic) unsigned int simpleRetrySucCount;
@property (nonatomic) BOOL hasSimpleDnsLevelDown;
@property (nonatomic) unsigned long long normalRttTotalTime;
@property (nonatomic) unsigned long long simpleRttTotalTime;
@property (nonatomic) unsigned int totalCount;

- (void)recordNewRequest:(id)a0;
- (void)recordReqSuccess:(id)a0;
- (void)recordReqFailed:(id)a0;
- (void)recordSimpleDnsLevelDown;
- (void)doReportAndClean;
- (id)toReportString;
- (int)getReportNetWorkType;
- (void)report;

@end
