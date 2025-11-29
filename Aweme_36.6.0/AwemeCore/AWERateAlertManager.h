@class NSString, UIWindow;

@interface AWERateAlertManager : NSObject <AWEBizTabBarMessage, AWEBizTabBarLifeCycleMessage>

@property (nonatomic) BOOL hasEnteredUnreadLikesList;
@property (retain, nonatomic) UIWindow *rateWindow;
@property (retain, nonatomic) UIWindow *lastWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)sharedManager;

- (void)markEnteringLikesListWithUnreadCount:(long long)a0;
- (void)tabBarController:(id)a0 didSelectItemType:(long long)a1 previousItemType:(long long)a2;
- (BOOL)isRateAlertShowing;
- (void)showRateAlertIfNeededForType:(unsigned long long)a0;
- (void)showRateAlertIfNeededForType:(unsigned long long)a0 withCloseBlock:(id /* block */)a1;
- (BOOL)shouldShowRateAlertForType:(unsigned long long)a0;
- (void)notifyUserActiveAction:(id)a0;
- (id)dayComponentsStringForToday;
- (id)dayComponentsStringForDate:(id)a0;
- (id)versionKeyForShownupForType:(unsigned long long)a0;
- (id)lastShownupKeyForType:(unsigned long long)a0;
- (id)alertTypeStringFromType:(unsigned long long)a0;
- (id)hasRepliedVersionKey;
- (BOOL)checkCommonAlertShowUpConditionForType:(unsigned long long)a0;
- (BOOL)checkSpecificAlertShowUpConditionForType:(unsigned long long)a0;
- (BOOL)checkAlertHasRecentlyShownUpForType:(unsigned long long)a0 interval:(double)a1;
- (long long)appLaunchTimesInDays:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)appDidBecomeActive;

@end
