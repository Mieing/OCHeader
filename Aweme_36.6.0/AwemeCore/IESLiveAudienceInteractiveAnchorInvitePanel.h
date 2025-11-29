@class NSString, NSArray, NSAttributedString, IESLiveCountTimer, UIImageView, CAShapeLayer, UIButton, NSDictionary, UILabel;

@interface IESLiveAudienceInteractiveAnchorInvitePanel : HTSLivePopUpView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) CAShapeLayer *animatedAvatarBorderLayer;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) UIButton *declineButton;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSArray *imageURLs;
@property (nonatomic) BOOL isFromAdmin;
@property (nonatomic) BOOL isPaidLink;
@property (nonatomic) BOOL isOverTime;
@property (nonatomic) long long teamSign;
@property (retain, nonatomic) IESLiveCountTimer *timer;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long inviteSource;
@property (copy, nonatomic) NSString *inviteUserSecID;
@property (copy, nonatomic) id /* block */ rejectAction;
@property (copy, nonatomic) id /* block */ acceptAction;
@property (copy, nonatomic) id /* block */ willAcceptInvitation;
@property (copy, nonatomic) NSAttributedString *attributedTitleString;
@property (copy, nonatomic) NSDictionary *trackParams;

- (void)didSetAttachingDIContext;
- (void)startCountDown;
- (void)cancelCountDown;
- (id)makeAvatarBorderLayer;
- (void)acceptRequest;
- (void)declineRequest;
- (void)startBeating;
- (void)stopBeating;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 nickName:(id)a1 imageURLs:(id)a2 isFromAdmin:(BOOL)a3 teamSign:(long long)a4 isPaidLink:(BOOL)a5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 nickName:(id)a1 imageURLs:(id)a2 isFromAdmin:(BOOL)a3 isPaidLink:(BOOL)a4;
- (void).cxx_destruct;
- (void)layoutUI;

@end
