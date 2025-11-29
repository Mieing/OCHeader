@class AWEInnerPushCommonViewModel, NSString, NSTimer, AWEInnerPushCommonView, AWEIMOnlienRemindPushModel;
@protocol AWEInnerNotificationContentOperator, AWEIMStreakDisplayManagerProtocol;

@interface AWEIMStreakRemindInnerPushView : NSObject <AWEIMStreakDisplayManagerDelegate, AWEInnerNotificationContent>

@property (retain, nonatomic) AWEIMOnlienRemindPushModel *pushModel;
@property (retain, nonatomic) id<AWEIMStreakDisplayManagerProtocol> imStreakDisplayManager;
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
- (BOOL)disableUseBusinessTypeDeterminDismissTimerInterval;
- (id)trackingModelForScene:(unsigned long long)a0;
- (void)updateLeftIcon;
- (void)updateLeftExtraIcon;
- (void)updateRightActionAreaModel;
- (void)updateTitleAreaItems;
- (void)updateContentAttrString;
- (BOOL)hitStreakUpdateExp;
- (void)transferFloatChat;
- (id)peerUserSecID;
- (void)p_sendStreak;
- (id)p_customizeModel:(id)a0 source:(id)a1;
- (void).cxx_destruct;
- (id)businessType;
- (id)view;
- (void)updateProperties;

@end
