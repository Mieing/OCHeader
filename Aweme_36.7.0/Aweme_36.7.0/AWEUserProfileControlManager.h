@interface AWEUserProfileControlManager : NSObject

+ (BOOL)percentCompletion;
+ (id)needShowCompletePercentTipLabelsWith:(id)a0;
+ (id)p_showPercentAnimationTimeKey;
+ (id)p_showPercentAnimationCountKey;
+ (id)p_bannerTipsTimeKey;
+ (id)p_bannerTips;
+ (id)p_bannerTipsIndexKey;
+ (long long)p_profileGuideShowNumber;
+ (BOOL)showPercentAnimation;
+ (void)showPercentAnimationCompletion;
+ (id)showBannerTipsContent;
+ (void)closeShowBannerTipsContent;

@end
