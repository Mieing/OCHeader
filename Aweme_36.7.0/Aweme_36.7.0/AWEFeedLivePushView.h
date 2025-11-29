@class NSString, AWEButton, AWELiveInnerPushModel, UILabel, UIView;
@protocol AWEInnerNotificationContentOperator, AWEFeedLiveMarkViewProtocol;

@interface AWEFeedLivePushView : UIView <AWEInnerNotificationContent>

@property (retain, nonatomic) UIView *contentBaseView;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) AWEButton *avatarButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) AWELiveInnerPushModel *livePushModel;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiveModuleServiceDOUYINHTSAdaperClass;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)handleTapAction;
- (void)viewDidDisappearWithReason:(long long)a0;
- (BOOL)tapGestureIsEnable:(id)a0;
- (id)trackEnterFrom;
- (id)aAWELiveModuleServiceDOUYINHTSAdaper;
- (BOOL)enableVibrateWhileViewDidAppear;
- (void)trackPushViewTagGesture;
- (void)trackEventSwipeGesDirectionUp;
- (void)__addSubviews;
- (id)livingMarkViewGradientColors:(BOOL)a0;
- (void)trackerVSLiveShowIfNeededWithModel:(id)a0;
- (void)trackerLiveShowWithLivePushModel:(id)a0;
- (void)trackEventLivePush:(BOOL)a0 trackID:(id)a1;
- (void)trackEventLivePush:(id)a0 pushModel:(id)a1 extraParams:(id)a2;
- (void)updatePushViewWithLivePush:(id)a0 trackID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)view;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
