@class NSString, AWEEcommerceInAppPushViewModel, AWEInnerPushCommonView, AWEInnerPushCommonViewModel;
@protocol AWEInnerNotificationContentOperator;

@interface AWEECommercePigeonInnerPushContent : UIView <AWEInnerNotificationContent>

@property (retain, nonatomic) AWEInnerPushCommonViewModel *viewModel;
@property (retain, nonatomic) AWEInnerPushCommonView *currentView;
@property (retain, nonatomic) AWEEcommerceInAppPushViewModel *noticePushModel;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEECModuleServiceDOUYINLGAdapterClass;

- (BOOL)disablePullIndicatorView;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)handleTapAction;
- (void)viewDidDisappearWithReason:(long long)a0;
- (double)dismissTimerInterval;
- (BOOL)disableUseBusinessTypeDeterminDismissTimerInterval;
- (BOOL)tapGestureIsEnable:(id)a0;
- (id)trackingModelForScene:(unsigned long long)a0;
- (void)updateLeftIcon;
- (void)updateLeftExtraIcon;
- (void)updateRightActionAreaModel;
- (void)updateTitleAreaItems;
- (void)updateContentAttrString;
- (id)trackEnterFrom;
- (id)aAWEECModuleServiceDOUYINLGAdapter;
- (void)awe_updateProperties;
- (id)noticeChatType:(id)a0;
- (BOOL)enableVibrateWhileViewDidAppear;
- (void)trackKefuPushViewShow;
- (void)trackBusinessPushMessageShow;
- (void)trackPushViewTagGesture;
- (void)trackKefuPushViewClick;
- (void)trackBusinessPushMessageClick;
- (id)appendEcomParamsIfNeed:(id)a0;
- (BOOL)isInEcommerceLive;
- (BOOL)isEcommerceKefuNotice;
- (BOOL)isEcommerceKefuFloatNoticeWithUrl:(id)a0;
- (void)registerLiveSmallWindowIfNeedWithUrl:(id)a0;
- (void)trackEventSwipeGesDirectionUp;
- (id)trackMessageLocation;
- (id)trackBusinessPushMessageParams;
- (void).cxx_destruct;
- (id)businessType;
- (id)view;

@end
