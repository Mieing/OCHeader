@class BaseRequest, NSMutableArray;

@interface ReportBrandSessionRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *msgReport;

+ (void)initialize;

@end
