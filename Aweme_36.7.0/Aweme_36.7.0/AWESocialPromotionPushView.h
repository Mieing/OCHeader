@class AWESocialPromotionPushViewModel, NSString, UIImageView, UILabel, UIView, UIButton;
@protocol AWEInnerNotificationContentOperator;

@interface AWESocialPromotionPushView : UIView <AWEInnerNotificationContent>

@property (retain, nonatomic) UIView *contentBaseView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *extAvatarBackground;
@property (retain, nonatomic) UIImageView *extAvatarImageView;
@property (retain, nonatomic) UIButton *replyButton;
@property (retain, nonatomic) UILabel *extTagLabel;
@property (retain, nonatomic) AWESocialPromotionPushViewModel *noticePushModel;
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
- (void)__addSubviews;
- (void)updateConfigurablePushView:(id)a0;
- (void)p_trackAction:(id)a0 extra:(id)a1;
- (void)configurableLayoutSubViews;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)view;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
