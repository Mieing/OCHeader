@class NSString, NSDictionary, NSNumber, DUXBottomNotification;

@interface AWEConcernWidgetManager : NSObject <AWEUGWidgetAddGuideViewDelegate, AWEUserMessage, AWEConcernWidgetManagerProtocol>

@property (nonatomic) BOOL shouldRequestGuidePermission;
@property (nonatomic) long long installedNumber;
@property (retain, nonatomic) NSDictionary *frequencySettings;
@property (nonatomic) BOOL shouldShowFollowListGuide;
@property (nonatomic) BOOL shouldShowFollowPageGuide;
@property (nonatomic) BOOL hasGuidePermission;
@property (copy, nonatomic) id /* block */ alertCompletionBlock;
@property (nonatomic) BOOL isFromWidget;
@property (retain, nonatomic) NSNumber *widgetUnreadNumber;
@property (retain, nonatomic) DUXBottomNotification *bottomNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)setupSettings;
- (void)setupFrequencyControl;
- (long long)maxShowGuideNumberOfFollowList;
- (long long)maxShowGuideNumberOfFollowPage;
- (void)openGuidePageWithFrom:(id)a0;
- (long long)feedGuideDisappeadTime;
- (void)checkWidgetInstalledCompletion:(id /* block */)a0;
- (void)setUserDefaultWithLogin:(BOOL)a0;
- (void)widgetGuideViewDidHide:(id)a0;
- (void)widgetClickedWithParams:(id)a0;
- (void)showNotificationWithEnterFrom:(id)a0 container:(id)a1;
- (long long)feedGuideConsumeCount;
- (long long)followListGuideDisappeadTime;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
