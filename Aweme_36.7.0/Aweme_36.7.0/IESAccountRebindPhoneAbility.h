@interface IESAccountRebindPhoneAbility : NSObject

+ (void)jumpToReBindPageIfNeedWithEnterFrom:(id)a0;
+ (void)pushToRebindDetailWithEnterFrom:(id)a0;
+ (void)pushToRebindVerifyWithEnterFrom:(id)a0;
+ (void)requestRebindManualReviewResult:(id /* block */)a0;
+ (void)didClickRebindDetailWithEnterFrom:(id)a0;

@end
