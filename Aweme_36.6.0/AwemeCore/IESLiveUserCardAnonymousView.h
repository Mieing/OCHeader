@class HTSLiveAvatarImageView, CAGradientLayer, UIView, IESLiveUserCardStore, UILabel, UIButton;

@interface IESLiveUserCardAnonymousView : UIView

@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) HTSLiveAvatarImageView *headImageView;
@property (retain, nonatomic) UIButton *reportBtn;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *introduceLabel;
@property (retain, nonatomic) UIButton *slienceBtn;
@property (retain, nonatomic) UIButton *blockBtn;
@property (retain, nonatomic) CAGradientLayer *backgroundView;
@property (retain, nonatomic) UIView *line;
@property (nonatomic) BOOL landscapeMode;

- (void)didSetAttachingDIContext;
- (double)leftOffset;
- (void)dismissUserCard;
- (void)touchHeadImage:(id)a0;
- (id)initWithStore:(id)a0 landscapeMode:(BOOL)a1;
- (id)addLineSeperator:(id)a0;
- (void)renderHeadImageView;
- (void)renderButtons;
- (void)renderNickNameLabel;
- (void)renderIntroduceLabel;
- (void)setupCurrentFrame;
- (double)widthInPortraitMode;
- (double)heightInPortraitMode;
- (BOOL)enableShowReportButton;
- (void)actionReport;
- (void)actionMute;
- (BOOL)shouldShowBlockButton;
- (void)actionBlockUser;
- (void)_enterProfile:(BOOL)a0 shouldSwitchRoom:(BOOL)a1;
- (void)switchLiveRoom:(id)a0;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (BOOL)shouldShowMuteButton;

@end
