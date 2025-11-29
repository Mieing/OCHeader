@interface AWEOldPaidStreamTool : NSObject

+ (id)getPlayletVIPConfigWithPlayletModel:(id)a0;
+ (BOOL)isIAPPaymentVideo:(id)a0;
+ (BOOL)isUnlockedVideo:(id)a0;
+ (BOOL)isPaidStreamHasPaidWithModel:(id)a0;
+ (BOOL)isPlayletUnlockedNewIAAVideo:(id)a0;
+ (BOOL)hasPaidPlayletVIPWithModel:(id)a0;
+ (BOOL)isNeedUnlockedAndBlockPlay:(id)a0;
+ (BOOL)isPaidStreamWithModel:(id)a0;
+ (BOOL)isIAARewardedAdvertisingVideo:(id)a0;
+ (BOOL)isPlayletNewIAAVideo:(id)a0;
+ (BOOL)isPlayletVIPVideoWithModel:(id)a0;
+ (BOOL)isPreAccessVideo:(id)a0;
+ (BOOL)isPreviewVideoWithModel:(id)a0;
+ (BOOL)hasPlayletVIPVideoWithPlayletModel:(id)a0;
+ (BOOL)hasPaidPlayletVIPWithPlayletModel:(id)a0;
+ (BOOL)isPlayletHasPreAccessVideo:(id)a0;
+ (id)getPlayletVIPChargeInfoConfigWithModel:(id)a0;
+ (BOOL)isPaidStreamPreviewWithModel:(id)a0;

@end
