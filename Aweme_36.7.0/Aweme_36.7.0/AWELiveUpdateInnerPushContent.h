@class AWELiveInappPushView, AWEInnerPushCommonViewModel, NSDictionary, AWELiveUpdateInnerPushAvatarView, AWEInnerPushCommonView, NSString, AWELiveInnerPushContentModel;
@protocol AWEInnerNotificationContentOperator, AWEIMStreakDisplayManagerProtocol;

@interface AWELiveUpdateInnerPushContent : NSObject <AWEIMStreakDisplayManagerDelegate, AWEInnerNotificationContent, AWELiveUpdateInnerPushViewDelegate>

@property (retain, nonatomic) AWELiveInnerPushContentModel *model;
@property (retain, nonatomic) id<AWEIMStreakDisplayManagerProtocol> imStreakDisplayManager;
@property (retain, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) AWELiveInappPushView *oldView;
@property (retain, nonatomic) AWEInnerPushCommonView *currentView;
@property (retain, nonatomic) AWEInnerPushCommonViewModel *viewModel;
@property (retain, nonatomic) AWELiveUpdateInnerPushAvatarView *customAvatarView;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (id)customIMStreakTextPreferTheme;
- (id)customIMStreakTextFont;
- (id)mainContent;
- (void)handleTapAction;
- (BOOL)enablePreview;
- (void)viewDidDisappearWithReason:(long long)a0;
- (double)dismissTimerInterval;
- (BOOL)disableUseBusinessTypeDeterminDismissTimerInterval;
- (BOOL)tapGestureIsEnable:(id)a0;
- (id)trackingModelForScene:(unsigned long long)a0;
- (void)updateLeftIcon;
- (void)updateRightActionAreaModel;
- (void)updateTitleAreaItems;
- (void)updateContentAttrString;
- (id)extTag;
- (id)prefixContent;
- (BOOL)hitStreakUpdateExp;
- (BOOL)enableVibrateWhileViewDidAppear;
- (void)addQueryItems;
- (BOOL)enablePlayerReuseWhenEnterRoom;
- (BOOL)pushPlatformExperiment;
- (id)trackParamsWithPushModel:(id)a0 scene:(unsigned long long)a1;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)businessType;
- (id)view;
- (id)title;
- (id)buttonText;
- (id)avatar;
- (void)updateProperties;
- (BOOL)hasAvatar;

@end
