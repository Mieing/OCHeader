@interface MagicAdCommonFeatureMMKV : NSObject

+ (id)getAdsInfoWithAid:(id)a0;
+ (void)setAdInfoWithAid:(id)a0 adInfo:(id)a1;
+ (void)removeAdInfoWithAid:(id)a0;
+ (void)setAdInfoWithAid:(id)a0 data:(id)a1;
+ (void)setExpireTimeWithPosId:(id)a0 expireTime:(unsigned long long)a1;
+ (unsigned long long)getExpiredTimeWithPosId:(id)a0;
+ (void)setHasFeedbackCloseAdWithPosId:(id)a0 value:(BOOL)a1;
+ (BOOL)getHasFeedbackCloseAdWithPosId:(id)a0;
+ (void)setAidwithPosId:(id)a0 aid:(id)a1;
+ (id)getAidWithPosId:(id)a0;
+ (id)getAidsWithPosId:(id)a0;
+ (void)addAidWithPosId:(id)a0 aid:(id)a1;
+ (void)cleanAidsWithPosId:(id)a0;

@end
