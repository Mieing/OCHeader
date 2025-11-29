@class BaseRequest, UnreadMsgReport;

@interface ChatReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) UnreadMsgReport *unreadMsgReport;

+ (void)initialize;

@end
