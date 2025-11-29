@class BaseRequest, NSMutableArray, RedDotReportItem;

@interface ReportBizListShowInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *reportList;
@property (nonatomic) unsigned int enterPos;
@property (nonatomic) unsigned int exitPos;
@property (nonatomic) unsigned int sessionid;
@property (nonatomic) unsigned long long enterTimestampMs;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int actType;
@property (nonatomic) unsigned long long exposeSessionId;
@property (retain, nonatomic) RedDotReportItem *reddotReportItem;

+ (void)initialize;

@end
