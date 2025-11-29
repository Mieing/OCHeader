@class AWEInnerPushCommonViewModel, NSString, NSTimer, AWEInnerPushCommonView, AWEIMOnlienRemindPushModel;
@protocol AWEInnerNotificationContentOperator, AWEIMStreakDisplayManagerProtocol;

@interface AWEIMFestivalWishPushContent : NSObject <AWEIMStreakDisplayManagerDelegate, AWEInnerNotificationContent>

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
- (double)dismissTimerInterval;
- (BOOL)disableUseBusinessTypeDeterminDismissTimerInterval;
- (id)trackingModelForScene:(unsigned long long)a0;
- (void)updateLeftIcon;
- (void)updateLeftExtraIcon;
- (void)updateRightActionAreaModel;
- (void)updateTitleAreaItems;
- (void)updateContentAttrString;
- (BOOL)hitStreakUpdateExp;
- (void)p_openProfile;
- (id)p_trackEnterFrom;
- (void)p_trackEnterChatEvent;
- (void)p_sendFestivalWish;
- (void)p_transferToFloatMessage;
- (void).cxx_destruct;
- (id)businessType;
- (id)view;
- (void)updateProperties;

@end
