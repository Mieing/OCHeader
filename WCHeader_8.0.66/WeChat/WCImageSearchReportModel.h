@class NSString;

@interface WCImageSearchReportModel : WCSearchReportModel

@property (nonatomic) long long action;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *picMD5;
@property (nonatomic) int cgiRet;
@property (copy, nonatomic) NSString *cgiAction;
@property (copy, nonatomic) NSString *sourceURL;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *docID;
@property (copy, nonatomic) NSString *reqKey;

+ (id)GenMsgReporterWithAction:(long long)a0 requestId:(id)a1 source:(long long)a2 scene:(unsigned int)a3 msgWrap:(id)a4;
+ (id)GenTimelineReporterWithAction:(long long)a0 requestId:(id)a1 source:(long long)a2 scene:(unsigned int)a3 snsItem:(id)a4 chatType:(unsigned long long)a5 picMD5:(id)a6;

- (id)initWithMsgWrap:(id)a0;
- (unsigned int)reportKvId;
- (id)reportContent;
- (void)reportImageOperation:(unsigned long long)a0;
- (void)doReport:(long long)a0;
- (void)doReport;
- (void).cxx_destruct;

@end
