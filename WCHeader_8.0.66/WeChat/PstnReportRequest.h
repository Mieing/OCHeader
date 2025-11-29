@class BaseRequest, SKBuiltinString_t;

@interface PstnReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinString_t *clientReport;
@property (retain, nonatomic) SKBuiltinString_t *channelReport;
@property (retain, nonatomic) SKBuiltinString_t *engineReport;
@property (nonatomic) unsigned int roomId;
@property (nonatomic) unsigned long long callSeq;
@property (nonatomic) unsigned int gotAnswer;

+ (void)initialize;

@end
