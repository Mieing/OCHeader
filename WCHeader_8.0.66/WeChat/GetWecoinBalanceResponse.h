@class BaseResponse;

@interface GetWecoinBalanceResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) long long balance;
@property (nonatomic) BOOL newUserDiscount;

+ (void)initialize;

- (void)setNewUserDiscount:(BOOL)a0;
- (BOOL)newUserDiscount;
- (void)setBalance:(long long)a0;
- (long long)balance;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
