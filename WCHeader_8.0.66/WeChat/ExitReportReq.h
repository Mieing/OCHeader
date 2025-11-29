@class BaseRequest, NSString;

@interface ExitReportReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *reportJson;

+ (void)initialize;

@end
