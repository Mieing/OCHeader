@class RealNameAuthInfo, WecoinTaxCutEntranceInfo;

@interface WCCoinEncashParameter : MMObject

@property (nonatomic) unsigned long long businessId;
@property (nonatomic) long long incomeBalance;
@property (retain, nonatomic) WecoinTaxCutEntranceInfo *taxCutInfo;
@property (retain, nonatomic) RealNameAuthInfo *authInfo;

- (void).cxx_destruct;

@end
