@class HTSLiveUser, UIImageView, UILabel, UIView;
@protocol IESLiveWebPPlayer;

@interface IESLiveRevenueInteractPlayGameControllerItemView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *micImageView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationViewLoop;
@property (nonatomic) BOOL isAnimated;
@property (copy, nonatomic) id /* block */ clickAction;
@property (retain, nonatomic) HTSLiveUser *user;

- (id)initWithDIContext:(id)a0;
- (void)startMultiTalkingAnimation;
- (void)stopMultiTalkingAnimation;
- (void)updateAudioAnimation:(BOOL)a0;
- (id)defaultSpeakingImage;
- (void)refreshWithCustomName:(id)a0;
- (void)refreshMuteStatus:(BOOL)a0;
- (void).cxx_destruct;

@end
