@class NSString, UIImageView, UILabel, UIView, AWELiveInnerPushContentModel;
@protocol AWEInnerNotificationContentOperator;

@interface AWELiveGameAppointmentInappPushView : UIView <AWEInnerNotificationContent>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) AWELiveInnerPushContentModel *livePushModel;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)handleTapAction;
- (void)viewDidDisappearWithReason:(long long)a0;
- (double)dismissTimerInterval;
- (BOOL)disableUseBusinessTypeDeterminDismissTimerInterval;
- (BOOL)tapGestureIsEnable:(id)a0;
- (BOOL)enableVibrateWhileViewDidAppear;
- (void)_updatePushViewWithLivePushModel:(id)a0;
- (void)_addQueryItemsWithPushModel:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)businessType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)view;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;

@end
