@class BaseRequest, NSMutableArray, AppMsgCommDataReport;

@interface AppMsgCommDataReportReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *report;
@property (retain, nonatomic) AppMsgCommDataReport *commFields;

+ (void)initialize;

@end
