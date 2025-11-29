@class NSDictionary, NSString;
@protocol IESIMThrottleDebounceAction;

@interface AWEBizTabBarMessageUnreadCountManager : NSObject <AWEDigitalWellbeingMessage, AWEBizTabBarMessage, AWEUserMessage>

@property (nonatomic) long long messageBadgeNumberValue;
@property (nonatomic) long long unreadCountOld;
@property (nonatomic) BOOL isFirstUpdateMessageTabUnreadStatus;
@property (nonatomic) BOOL messageBadgeDotShowEnable;
@property long long theNumberOfUpdatingTabBarUnreadCountUIPerUser;
@property (retain, nonatomic) id<IESIMThrottleDebounceAction> throttle;
@property BOOL hasFirstUpdatedUnreadCount;
@property BOOL isFinishedLoadIMFirstPageData;
@property (copy) NSDictionary *waitedTrackingParams;
@property BOOL isFirstShowUnreadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bizDowngradeIMTabBarDot;
+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (unsigned long long)getIMModuleTabBarUnreadCount;
- (void)tabBarControllerDidChangedFrame:(id)a0;
- (void)updateUnreadCount;
- (void)trackTheNumberOfUpdatingTabBarUnreadCountUIPerUserEvent;
- (void)handleMessageNoticeShowTrackingWithExtraParams:(id)a0;
- (id)isUnreadCountReduced;
- (void)resetMessageBadgeState;
- (id)theNumberOfUpdatingTabBarUnreadCountUIStorageKey;
- (void)trackWithComponentExtraForExtraParams:(id)a0;
- (void)didLoadIMFirstPageData;
- (void).cxx_destruct;
- (void)setupObservers;
- (void)applicationWillTerminate;
- (void)dealloc;

@end
