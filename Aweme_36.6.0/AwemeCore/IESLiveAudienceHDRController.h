@interface IESLiveAudienceHDRController : NSObject

+ (BOOL)isUserEnableHDR;
+ (BOOL)currentHDRStatusForRoomID:(id)a0;
+ (BOOL)isFeedCanEnableHDRFeature;
+ (BOOL)isCurrentRoomSupportHDR:(id)a0 roomModel:(id)a1;
+ (BOOL)shouldShowHDRSwitchForRoom:(id)a0;
+ (id)hdrFeatureConfigSwitchViewTitle;
+ (id)hdrFeatureConfigSwitchViewContent;
+ (id)hdrFeatureConfigIntroduceViewImageURL;
+ (id)hdrFeatureConfigIntroduceViewTitle;
+ (id)hdrFeatureConfigIntroduceViewContent;
+ (void)setUserEnableHDR:(BOOL)a0;
+ (id)hdrFeatureBubbleConfig;
+ (BOOL)isInnerFeedCanEnableHDRFeature;
+ (id)hdrFeatureConfig;
+ (unsigned long long)p_getBrightnessConfig;
+ (void)p_checkAndExpireUserHDRSettingIfNeeded;
+ (BOOL)p_isHDRFeatureEnable;
+ (BOOL)isRoomTypeInWhiteList:(id)a0;
+ (id)hdrEnableCache;
+ (unsigned long long)p_hdrSwitchOptionConfig;
+ (id)p_hdrIntroduceViewConfig;
+ (id)p_hdrSwitchViewConfig;

@end
