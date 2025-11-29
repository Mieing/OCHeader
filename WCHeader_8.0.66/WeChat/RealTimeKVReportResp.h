@class BaseResponse;

@interface RealTimeKVReportResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;

+ (void)initialize;

- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
