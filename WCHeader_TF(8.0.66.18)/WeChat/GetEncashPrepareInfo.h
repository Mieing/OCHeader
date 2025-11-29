@class NSString, RealNameAuthInfo, LiteappJumpInfo, WecoinTaxCutEntranceInfo;

@interface GetEncashPrepareInfo : WXPBGeneratedMessage

@property (nonatomic) long long incomeBalance;
@property (retain, nonatomic) NSString *incomeBillUrl;
@property (retain, nonatomic) RealNameAuthInfo *authInfo;
@property (retain, nonatomic) WecoinTaxCutEntranceInfo *taxCutInfo;
@property (nonatomic) unsigned int businessId;
@property (nonatomic) long long pendingIncomeBalance;
@property (retain, nonatomic) LiteappJumpInfo *encashInterceptJumpInfo;

+ (void)initialize;

@end
