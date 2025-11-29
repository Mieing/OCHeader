@interface IESLiveGiftForbidUnderageConsumeTipHelper : NSObject

+ (unsigned long long)giftPanelOpenTimesToday;
+ (void)saveGiftPanelOpenTimesToday:(unsigned long long)a0;
+ (unsigned long long)forbidUnderageConsumeTipShowTimesToday;
+ (void)saveForbidUnderageConsumeTipShowTimesToday:(unsigned long long)a0;
+ (unsigned long long)forbidUnderageConsumeTipCurrentGapDays;
+ (void)saveForbidUnderageConsumeTipCurrentGapDays:(unsigned long long)a0;
+ (id)forbidUnderageConsumeTipLastShowDate;
+ (void)saveForbidUnderageConsumeTipLastShowDate:(id)a0;

@end
