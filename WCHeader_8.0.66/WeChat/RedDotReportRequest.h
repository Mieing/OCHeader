@class BaseRequest, NSMutableArray;

@interface RedDotReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *reportItem;

+ (void)initialize;

- (void)setReportItem:(id)a0;
- (id)reportItem;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
