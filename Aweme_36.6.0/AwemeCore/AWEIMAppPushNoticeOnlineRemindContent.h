@class AWEInnerPushCommonViewModel, NSString, NSDictionary, NSTimer, AWEInnerPushCommonView, AWEIMOnlienRemindPushModel;
@protocol AWEInnerNotificationContentOperator, AWEIMStreakDisplayManagerProtocol;

@interface AWEIMAppPushNoticeOnlineRemindContent : NSObject <AWEIMStreakDisplayManagerDelegate, AWEInnerNotificationContent>

@property (retain, nonatomic) AWEIMOnlienRemindPushModel *pushModel;
@property (retain, nonatomic) id<AWEIMStreakDisplayManagerProtocol> imStreakDisplayManager;
@property (retain, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSTimer *customDismissTimer;
@property (retain, nonatomic) AWEInnerPushCommonView *currentView;
@property (retain, nonatomic) AWEInnerPushCommonViewModel *viewModel;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disablePullIndicatorView;
- (void)renderModel:(id)a0 context:(id)a1;
- (id)customIMStreakTextPreferTheme;
- (id)customIMStreakTextFont;
- (void)handleTapAction;
- (void)viewDidDisappearWithReason:(long long)a0;
- (double)dismissTimerInterval;
- (BOOL)disableUseBusinessTypeDeterminDismissTimerInterval;
- (id)trackingModelForScene:(unsigned long long)a0;
- (void)updateLeftIcon;
- (void)updateLeftExtraIcon;
- (void)updateRightActionAreaModel;
- (void)updateTitleAreaItems;
- (void)updateContentAttrString;
- (BOOL)hitStreakUpdateExp;
- (id)p_customizeModel:(id)a0 source:(id)a1;
- (BOOL)p_hitReplaceHiWithPoke;
- (void)p_openFloatChat;
- (void)p_openProfile;
- (void)p_tapActionView;
- (id)p_trackChatType;
- (id)p_trackEnterFrom;
- (id)p_onlineRemindPushType;
- (id)p_imRemindPushType;
- (id)p_greetLightInteractionSourceWithModel:(id)a0;
- (BOOL)p_shouldOptimizeIconUIForBiz:(id)a0;
- (id)p_sceneGreetSourcePath;
- (id)p_birthdayWishSourcePath;
- (void)p_openVoipCallWithVideo:(BOOL)a0;
- (void)p_openPlayRemote;
- (void)p_openRTVGame;
- (id)p_activityTypeToEnterChat;
- (void)p_trackEnterChatEvent;
- (void)p_sendGreet;
- (void)p_ariseSnackbar;
- (BOOL)p_hasSceneGreetSource;
- (void)p_sendSceneGreet;
- (BOOL)p_hasBirthdayWishSource;
- (void)p_sendBirthdayWish;
- (void)p_openFriendList;
- (void)p_handleRTVAction;
- (BOOL)p_shouldShowLightFlameWithModel:(id)a0;
- (void).cxx_destruct;
- (id)businessType;
- (id)view;
- (void)updateProperties;

@end
