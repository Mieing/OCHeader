@interface AWEScreenCastSettingsManager : NSObject

+ (BOOL)longVideoSupportCast:(BOOL)a0;
+ (id)shortVideoCastConfig:(BOOL)a0;
+ (BOOL)searchViewUnification;
+ (BOOL)useNewControlViewUI;
+ (id)bizSettingConfig;
+ (BOOL)enableLongVideoFocusMode;
+ (BOOL)innerFeedSupportLoadMoreForAllScene;
+ (id)screenCastSDKSettings;
+ (id)screenCastInnerFeedConfig;
+ (long long)airPlayMirrorObserverDelay;
+ (BOOL)audioSessionOptimized;
+ (BOOL)hideOverseaCastEntrance;
+ (id)longVideoCastInFeedConfig;
+ (id)screenCastInnerFeedPlayOptimizeConfig;
+ (BOOL)screenCastInnerFeedCustomUIEnable;
+ (id)screenCastPendantConfig;
+ (BOOL)enableCheckURLExpire;
+ (id)screenCastContentStrategy;
+ (BOOL)landscapeCastEnable:(BOOL)a0;

@end
