@interface AWEHomePageRemoteTrackManager : NSObject

+ (void)trackModeClickWithContext:(id)a0 modeName:(id)a1;
+ (void)willShowWithContext:(id)a0;
+ (void)didShowWithContext:(id)a0;
+ (void)willDismissWithContext:(id)a0 withReason:(long long)a1;
+ (void)didDismissWithContext:(id)a0 withReason:(long long)a1;
+ (void)didClickItemWithContext:(id)a0 withModuleType:(id)a1 withBusinessType:(id)a2;
+ (id)p_exitMethodFromReason:(long long)a0;
+ (id)p_methodNameFromBusinessType:(id)a0;
+ (void)didClickMaskWithContext:(id)a0;
+ (void)didClickCloseButtonWithContext:(id)a0;

@end
