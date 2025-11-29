@class NSString, UIImageView, UILabel, UIView, AWEEcommerceInAppPushViewModel;
@protocol AWEInnerNotificationContentOperator;

@interface AWEECommercePigeonPushView : UIView <AWEInnerNotificationContent>

@property (retain, nonatomic) UIView *contentBaseView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
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
- (id)trackEnterFrom;
- (id)aAWEECModuleServiceDOUYINLGAdapter;
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
- (void)updatePushViewWithNoticePush:(id)a0;
- (void)trackEventShowPushModel:(id)a0 trackID:(id)a1;
- (void)__addSubviews;
- (void).cxx_destruct;
- (id)init;
- (id)businessType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)view;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
