@class WecoinTaxCutEntranceInfo, NSString, RealNameAuthInfo, LiteappJumpInfo, CoinBanner, BaseResponse;

@interface GetIncomePageInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) long long incomeBalance;
@property (retain, nonatomic) NSString *incomeBillUrl;
@property (retain, nonatomic) NSString *qaUrl;
@property (retain, nonatomic) CoinBanner *banner;
@property (retain, nonatomic) RealNameAuthInfo *authInfo;
@property (retain, nonatomic) NSString *encashLimitWording;
@property (nonatomic) BOOL encashButtonValid;
@property (retain, nonatomic) WecoinTaxCutEntranceInfo *taxCutInfo;
@property (nonatomic) long long pendingIncomeBalance;
@property (retain, nonatomic) LiteappJumpInfo *encashInterceptJumpInfo;

+ (void)initialize;

@end
