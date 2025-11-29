@class BaseRequest, NSString;

@interface GetWecoinBalanceRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *reportSessionId;

+ (void)initialize;

- (void)setReportSessionId:(id)a0;
- (id)reportSessionId;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
