@class NSString, NSArray, UIImageView, CAShapeLayer, UIButton, IESLiveCountTimer, UILabel, IESLiveLinkMicBizExtra;

@interface IESLivePKGuestReceiveInvitationPanel : HTSLivePopUpView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) CAShapeLayer *animatedAvatarBorderLayer;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) UIButton *declineButton;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSArray *imageURLs;
@property (nonatomic) BOOL isFromAdmin;
@property (nonatomic) BOOL isOverTime;
@property (retain, nonatomic) IESLiveLinkMicBizExtra *linkBizExtra;
@property (retain, nonatomic) IESLiveCountTimer *timer;
@property (copy, nonatomic) id /* block */ rejectAction;
@property (copy, nonatomic) id /* block */ acceptAction;

- (void)didSetAttachingDIContext;
- (void)startCountDown;
- (void)cancelCountDown;
- (id)makeAvatarBorderLayer;
- (void)acceptRequest;
- (void)declineRequest;
- (void)startBeating;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 nickName:(id)a1 imageURLs:(id)a2 isFromAdmin:(BOOL)a3 linkBizExtra:(id)a4;
- (void).cxx_destruct;
- (void)layoutUI;

@end
