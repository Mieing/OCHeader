@class MASConstraint, UIImageView, UILabel, UIView, IESLiveGameOpenPlatformAudienceNotificationViewModel;

@interface IESLiveGameOpenPlatformAudienceNotificationView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *noticeLabel;
@property (retain, nonatomic) UILabel *nextNoticeLabel;
@property (retain, nonatomic) IESLiveGameOpenPlatformAudienceNotificationViewModel *viewModel;
@property (retain, nonatomic) MASConstraint *noticeLabelCenterYConstraint;
@property (retain, nonatomic) MASConstraint *nextNoticeLabelCenterYConstraint;

- (void)hideWithAnimation:(BOOL)a0;
- (void)showNextNotice:(id)a0 animationStyle:(long long)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;
- (void)tapAction;

@end
