@class UIView, NSString, HTSLiveAvatarImageView, UIImageView, HTSLiveButton, IESLiveRoomProfileStore, CAGradientLayer, HTSLiveUser, UILabel;
@protocol IESLiveRoomService;

@interface LiveMChannelUserProfileView : UIView <IESLiveUserActions, CAAnimationDelegate, HTSLivePluginLayoutView, IESLiveUserProfileViewProtocol>

@property (retain, nonatomic) UILabel *name;
@property (retain, nonatomic) HTSLiveAvatarImageView *avatarView;
@property (retain, nonatomic) UIView *backgroundContainer;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIImageView *authIconView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) id<IESLiveRoomService> liveRoomModel;
@property (retain, nonatomic) HTSLiveUser *channelUser;
@property (nonatomic) double midWidth;
@property (retain, nonatomic) HTSLiveButton *followBtn;
@property (nonatomic) BOOL isFollow;
@property (retain, nonatomic) UIView *topBackView;
@property (nonatomic) BOOL isShowExchangingAni;
@property (retain, nonatomic) IESLiveRoomProfileStore *profileStore;
@property (copy, nonatomic) id /* block */ onFollowClicked;
@property (nonatomic) BOOL shouldShowUserList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)followButtonClicked:(id)a0;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (id)buttonBgImageWithColorArray:(id)a0;
- (void)remakeLayout;
- (void)showExchangeTopAndBottomLabelAnimation;
- (void)refreshUserCount:(id)a0;
- (void)setupBgContainerView;
- (void)refreshLiveRoomModel:(id)a0;
- (void)screenOrientationChanged:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 profileStore:(id)a1;
- (void)setViewAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
- (id)transformScaleAnimation:(double)a0 isInverse:(BOOL)a1;
- (void)removeExchangeTopAndBottomLabelAnimation;
- (void)tapAvatarViewTapped:(id)a0;
- (void)setupDetailLabels;
- (void)setupFollowButton;
- (void)remakeBackgroundContainerConstraints;
- (void)remakeFollowButton:(BOOL)a0;
- (void)refreshEasterEggsWithDiggCount:(long long)a0;
- (void)endEasterEggs;
- (struct CGPoint { double x0; double x1; })easterCenterPoint;
- (void)refreshFanPiaoCount:(id)a0;
- (void)refreshFansCount:(id)a0;
- (void)refreshCurrentLiveEarnings:(id)a0;
- (void)refreshDiggTotalCount:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)viewType;
- (void)addObserver;
- (void)layoutSubviews;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupAvatarView;

@end
