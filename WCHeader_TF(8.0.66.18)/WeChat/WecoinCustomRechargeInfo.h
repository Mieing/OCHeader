@class WecoinPriceInfo;

@interface WecoinCustomRechargeInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int enableCustomRecharge;
@property (retain, nonatomic) WecoinPriceInfo *customPriceInfo;
@property (nonatomic) unsigned long long rechargePriceUpperbound;
@property (nonatomic) unsigned int replaceIdx;

+ (void)initialize;

@end
