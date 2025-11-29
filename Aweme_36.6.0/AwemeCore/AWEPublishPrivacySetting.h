@interface AWEPublishPrivacySetting : NSObject

+ (BOOL)shouldShowAlert:(unsigned long long)a0;
+ (BOOL)isNewFriendsDailyPublishPanelExperimentStatusWithPublishModel:(id)a0;
+ (void)showSelfAlertIfNeeded:(unsigned long long)a0 publishModel:(id)a1;
+ (BOOL)shouldShowXiguaPrivacySettingsWithPublishModel:(id)a0;
+ (BOOL)shouldShowXiguaPrivacySettingsWithPublishModel:(id)a0 checkStartAtlas:(BOOL)a1;
+ (void)trackChangeXiguaPrivacyWithXiguaPrivacyType:(long long)a0 awemeModel:(id)a1 isReedit:(BOOL)a2 isStarAtlas:(BOOL)a3 success:(BOOL)a4;
+ (id)keyWithType:(unsigned long long)a0;
+ (void)showSelfAlert:(unsigned long long)a0 publishModel:(id)a1;
+ (BOOL)shouldShowXiguaPrivacySettingsWithPublishModel:(id)a0 checkStartAtlas:(BOOL)a1 checkLandscape:(BOOL)a2;

@end
