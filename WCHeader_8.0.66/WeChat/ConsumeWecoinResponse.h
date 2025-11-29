@class RetryInfo, BaseResponse;

@interface ConsumeWecoinResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) long long wecoinBalance;
@property (retain, nonatomic) RetryInfo *retryInfo;

+ (void)initialize;

@end
