@class AWEInnerPushCommonViewModel, NSString, AWEFriendsRadarPushModel, AWEInnerNotificationRequest, AWEInnerPushCommonView;
@protocol AWEInnerNotificationContentOperator;

@interface AWEFriendsRadarPushContent : NSObject <AWEInnerNotificationContent>

@property (retain, nonatomic) AWEFriendsRadarPushModel *model;
@property (retain, nonatomic) AWEInnerNotificationRequest *request;
@property (retain, nonatomic) AWEInnerPushCommonView *currentView;
@property (retain, nonatomic) AWEInnerPushCommonViewModel *viewModel;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disablePullIndicatorView;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)handleTapAction;
- (void)viewDidDisappearWithReason:(long long)a0;
- (BOOL)tapGestureIsEnable:(id)a0;
- (id)trackingModelForScene:(unsigned long long)a0;
- (void)updateLeftIcon;
- (void)updateRightActionAreaModel;
- (void)updateTitleAreaItems;
- (void)updateContentAttrString;
- (id)trackEnterFrom;
- (void)updateLeftIconLottieView;
- (id)lottieAnimationName;
- (id)lottieAnimationBundle;
- (void)updateArrowRightActionAreaModel;
- (void)p_trackInnerPushWithActionType:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)titleText;
- (id)subtitleText;
- (id)view;
- (void)updateProperties;

@end
