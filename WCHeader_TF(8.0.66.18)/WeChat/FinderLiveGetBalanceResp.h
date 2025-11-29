@class NSString, BaseResponse;

@interface FinderLiveGetBalanceResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long wecoinBalance;
@property (nonatomic) unsigned long long consumeQuotaBalance;
@property (retain, nonatomic) NSString *consumeQuotaVerifyUrl;
@property (nonatomic) unsigned long long historyConsumeQuotaBalance;

+ (void)initialize;

@end
