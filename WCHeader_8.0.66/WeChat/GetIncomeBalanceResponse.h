@class BaseResponse;

@interface GetIncomeBalanceResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) long long balance;

+ (void)initialize;

@end
