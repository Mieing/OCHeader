@class CAGradientLayer, UIImageView, HTSLiveLinkmicGuestLinkUser, UILabel, UIView;
@protocol IESLiveWebImageService, IESLiveWebPPlayer;

@interface IESLiveInteractionGuestLinkInfoView : UIView

@property (nonatomic) long long index;
@property (nonatomic) BOOL talking;
@property (nonatomic) BOOL isVideoSeat;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *inviterLabel;
@property (retain, nonatomic) UIView *fanTicketContainer;
@property (retain, nonatomic) UILabel *fanTicketLabel;
@property (retain, nonatomic) UIView *audioContainer;
@property (retain, nonatomic) UIView *avatarContainer;
@property (retain, nonatomic) CAGradientLayer *background;
@property (retain, nonatomic) UIImageView *avatarImgView;
@property (retain, nonatomic) UIView *audioLabelContainer;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *voiceWaveWebpView;
@property (weak, nonatomic) id<IESLiveWebImageService> webImageService;
@property (retain, nonatomic) UIView *videoContainer;
@property (retain, nonatomic) UIView *currentSessionView;
@property (retain, nonatomic) UIView *videoLabelContainer;
@property (retain, nonatomic) HTSLiveLinkmicGuestLinkUser *user;

- (void)showUserProfile;
- (void)updateElementWithSeatState:(BOOL)a0;
- (void)setupVoiceWave;
- (void)createAudioViewIfNeed;
- (void)createVideoViewIfNeed;
- (void)startPlayVoiceWave;
- (void)stopPlayVoiceWave;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 index:(long long)a1 context:(id)a2;
- (void)updateTalkingState:(BOOL)a0;
- (void)updateWithSessionView:(id)a0;
- (void).cxx_destruct;

@end
