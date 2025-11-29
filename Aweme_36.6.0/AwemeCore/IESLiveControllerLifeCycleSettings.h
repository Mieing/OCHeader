@interface IESLiveControllerLifeCycleSettings : NSObject

+ (id)monitorConfig;
+ (BOOL)enableVisibleToast;
+ (id)optimizeSettingsValue;
+ (BOOL)isInAboveLiveLayerPageList:(id)a0;
+ (BOOL)isInUnderLiveLayerPageList:(id)a0;
+ (BOOL)delayPushCustomSpecialController:(id)a0;
+ (long long)maxOcclusionCalcCount;
+ (double)occlusionAreaThreshold;
+ (BOOL)isInUnOccludedPageList:(id)a0;
+ (BOOL)isInOccludedPageList:(id)a0;
+ (double)opaqueAlphaThreshold;
+ (BOOL)isInTransparentViewList:(id)a0;
+ (BOOL)isInTransparentLayerList:(id)a0;
+ (BOOL)isInOpaqueViewList:(id)a0;
+ (BOOL)isInOpaqueLayerList:(id)a0;
+ (double)defaultVisibleViewMaxCount;
+ (BOOL)enlargeMaxCountForCustomSpecialController:(id)a0;
+ (double)enlargeVisibleViewMaxCount;
+ (BOOL)isInHalfScreenWhiteList:(id)a0;
+ (BOOL)isInFullScreenWhiteList:(id)a0;
+ (BOOL)filterSystemSpecialControllerWhenPopPages:(id)a0;
+ (BOOL)isInLeakCheckBlackList:(id)a0;
+ (id)filterSystemSpecialControllers;
+ (id)delayPushSpecialControllers;
+ (id)enlargeSpecialWebviewControllers;
+ (id)enlargeSpecialNativeControllers;
+ (id)halfScreenWhitelist;
+ (id)fullScreenWhitelist;
+ (id)liveOcclusionSettings;

@end
