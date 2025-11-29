@class NSString;

@interface AWEBeforeSystemPushPermissionRequestManager : NSObject

@property (nonatomic) BOOL isBeforeSystemPushPermissionRequestAlertPresented;
@property (copy, nonatomic) NSString *alertShowReason;
@property (copy, nonatomic) NSString *alertSelectionType;
@property (nonatomic) BOOL isSystemAlertDelayed;

+ (Class)aAWENotificationGuideCommonAdapterClass;
+ (id)sharedInstance;

- (id)preSystemNotificationPermissionAlertGuideTestGroups;
- (BOOL)isBeforeSystemPushPermissionRequestAlertEnabled;
- (id)aAWENotificationGuideCommonAdapter;
- (BOOL)p_isInHomepageHot;
- (void)trackBeforeSystemPushPermissionRequestAlertWithEventType:(id)a0;
- (void)logAlertInfo;
- (void)resetTrackerParams;
- (void)onSystemPermissionAlertReadyToShow;
- (void)presentedBeforeSystemPushPermissionRequestAlert;
- (BOOL)hasPresentedBeforeSystemPushPermissionRequestAlert;
- (void).cxx_destruct;
- (id)init;
- (void)didBecomeActive:(id)a0;

@end
