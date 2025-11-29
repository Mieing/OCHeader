@class BaseRequest, NSMutableArray;

@interface AdDataReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *logItem;

+ (void)initialize;

@end
