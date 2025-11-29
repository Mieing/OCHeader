@class NSTimer, UIView, IESLiveChatRoomInviteGuideConfig, NSString, UIImageView, HTSLiveUser, UILabel, UIColor;
@protocol IESLiveWebPPlayer;

@interface IESLiveChatRoomInviteGuideView : UIView <CAAnimationDelegate>

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) double avatarSideLength;
@property (nonatomic) double ratio;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double onlineLabelWidth;
@property (nonatomic) double inviteLabelWidth;
@property (nonatomic) double successLabelWidth;
@property (nonatomic) double fontSize;
@property (nonatomic) double labelHeight;
@property (retain, nonatomic) UIColor *lightColor;
@property (retain, nonatomic) UIColor *darkColor;
@property (nonatomic) BOOL isSquareAudio;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UIView *clipView;
@property (retain, nonatomic) UIView *maskingView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *checkView;
@property (retain, nonatomic) UIView *labelBgView;
@property (retain, nonatomic) UILabel *onlineLabel;
@property (retain, nonatomic) UILabel *inviteLabel;
@property (nonatomic) BOOL inviteShow;
@property (retain, nonatomic) IESLiveChatRoomInviteGuideConfig *config;
@property (nonatomic) BOOL enableAudioLayoutConfig;
@property (copy, nonatomic) id /* block */ clickedBlock;
@property (copy, nonatomic) id /* block */ hidedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showWithAnimation:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andUser:(id)a1 andConfig:(id)a2 diContext:(id)a3;
- (void)p_calculateRadio;
- (void)didClickInvite;
- (void)animateToEnd;
- (void)showWithNewAnimation:(id /* block */)a0;
- (double)gapHeight;
- (void)setUpNewConstraints;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (double)avatarSize;
- (void)setupViews;

@end
