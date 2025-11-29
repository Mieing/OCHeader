@interface IESECLiveAuctionUtils : NSObject

+ (BOOL)isSelfTopBiz:(id)a0;
+ (BOOL)shouldShowCountdownToast:(double)a0;
+ (BOOL)showRemindBizToastIfNeeded;
+ (id)countDownTextColorWhenAuctionWaring:(double)a0;
+ (id)countDownBgColorWhenAuctionWaring:(double)a0;

@end
