@class BaseRequest, NSMutableArray;

@interface AdDataReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *logItem;

+ (void)initialize;

- (void)setLogItem:(id)a0;
- (id)logItem;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
