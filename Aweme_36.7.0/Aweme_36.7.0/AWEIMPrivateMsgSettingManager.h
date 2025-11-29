@interface AWEIMPrivateMsgSettingManager : NSObject

+ (double)panelHeight;
+ (void)showPrivateMsgSettingPanelWithResultBlock:(id /* block */)a0 enterFrom:(id)a1 enterMethod:(id)a2;
+ (void)trackWhoCanMessageMeClickTo:(long long)a0 fromValue:(long long)a1 enterFrom:(id)a2 enterMethod:(id)a3;
+ (void)trackWhoCanMessageMeShow:(long long)a0 enterFrom:(id)a1 enterMethod:(id)a2;
+ (BOOL)p_isBetween14And18YearOld;
+ (id)trackParamFromWhoCanMessageMeValue:(long long)a0;
+ (long long)currentWhoCanMessageMeSelectValue;
+ (id)strangerTopTipsWithValue:(long long)a0;
+ (id)strangerTopTipsBtnTextWithValue:(long long)a0;
+ (void)fetchWhoCanMessageMeSettingWithCompletion:(id /* block */)a0;
+ (double)panelBottomSpace;
+ (id)settingDataArray;
+ (void)trackWhoCanMessageMeBannerShow:(long long)a0 enterFrom:(id)a1;

@end
