@class UIView, NSString, NSArray, IESLiveCountTimer, UIImageView, CAShapeLayer, UIButton, UILabel;

@interface IESLiveChatChannelLinkmicInvitePanel : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) CAShapeLayer *animatedAvatarBorderLayer;
@property (retain, nonatomic) CAShapeLayer *staticAvatarBorderLayer;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) UIButton *declineButton;
@property (retain, nonatomic) IESLiveCountTimer *timer;
@property (nonatomic) BOOL isOverTime;
@property (copy, nonatomic) id /* block */ rejectAction;
@property (copy, nonatomic) id /* block */ acceptAction;
@property (copy, nonatomic) NSString *nicknameText;
@property (copy, nonatomic) NSArray *avatarImageUrls;

- (void)startCountDown;
- (void)onShow;
- (void)cancelCountDown;
- (id)makeAvatarBorderLayer;
- (void)acceptRequest;
- (void)declineRequest;
- (void)startBeating;
- (void)stopBeating;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setup;
- (void)onDismiss;

@end
