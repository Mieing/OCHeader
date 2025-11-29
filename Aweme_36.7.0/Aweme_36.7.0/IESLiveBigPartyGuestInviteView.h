@class HTSLiveUser, NSString, UIImageView, NSTimer, UIView, UILabel, UIButton;
@protocol IESLiveBigPartyGuestInviteViewDelegate, IESLiveWebPPlayer;

@interface IESLiveBigPartyGuestInviteView : UIView <IESLiveInteractiveViewAboveListView> {
    BOOL _isRunning;
}

@property (retain, nonatomic) HTSLiveUser *user;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) double scale;
@property (retain, nonatomic) UIView *tipsContainerView;
@property (retain, nonatomic) UIView *tipsImageBgView;
@property (retain, nonatomic) UIImageView *tipsImageView;
@property (retain, nonatomic) UIView *tipsLabelBgView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *checkView;
@property (retain, nonatomic) UIButton *leftTapView;
@property (retain, nonatomic) UIButton *rightTapView;
@property (retain, nonatomic) NSTimer *avatarTwinkleTimer;
@property (retain, nonatomic) NSTimer *tipsTwinkleTimer;
@property (nonatomic) long long style;
@property (weak, nonatomic) id<IESLiveBigPartyGuestInviteViewDelegate> delegate;
@property (nonatomic) BOOL inRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)roundStyle;
- (void)addCornerRadius;
- (void)updatePaidLinkMicText:(BOOL)a0;
- (void)startAnimaion;
- (void)startAvatarTwinkleAnimation;
- (void)stopAvatartTwinkleAnimation;
- (void)clickInviteAnimation;
- (void)leftTapViewDidTap;
- (void)rightTapViewDidTap;
- (void)showInviteTipsWithUser:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)layoutSubviews;
- (void)endAnimation;
- (void)setupViews;

@end
