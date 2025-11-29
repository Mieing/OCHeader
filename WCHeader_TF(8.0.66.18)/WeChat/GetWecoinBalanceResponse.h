@class BaseResponse;

@interface GetWecoinBalanceResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) long long balance;
@property (nonatomic) BOOL newUserDiscount;

+ (void)initialize;

@end
