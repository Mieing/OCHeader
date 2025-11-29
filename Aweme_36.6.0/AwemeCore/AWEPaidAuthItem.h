@class AWEPaidAuthPaymentChargeInfo, NSDictionary, AWEPaidAuthRewardChargeInfo;

@interface AWEPaidAuthItem : NSObject

@property (nonatomic) unsigned long long authItemType;
@property (nonatomic) long long paymentType;
@property (weak, nonatomic) AWEPaidAuthItem *nextAuthItem;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) AWEPaidAuthRewardChargeInfo *rewardChargeInfo;
@property (retain, nonatomic) AWEPaidAuthPaymentChargeInfo *paymentChargeInfo;

- (void).cxx_destruct;
- (id)toDictionary;

@end
