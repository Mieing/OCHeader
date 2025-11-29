@class CAGradientLayer, AWEPOICityLiveComponentViewModel, UIImageView, NSString, UIView, UILabel, AWEPOIDetailAwemePlayerViewController;
@protocol AWELiveStreamPlayer;

@interface AWEPOICityLiveComponentView : DitoComponentView <IESLivePlayerControllerDelegate, AWEPOIDetailAwemePlayerCellProtocol>

@property (weak, nonatomic) AWEPOICityLiveComponentViewModel *viewModel;
@property (retain, nonatomic) id<AWELiveStreamPlayer> livePlayer;
@property (readonly, nonatomic) UIView *coverContainerView;
@property (readonly, nonatomic) UIView *statusView;
@property (readonly, nonatomic) UILabel *statusLabel;
@property (readonly, nonatomic) CAGradientLayer *statusBackgroundLayer;
@property (readonly, nonatomic) UIView *statusDetailBackgroundView;
@property (readonly, nonatomic) UIImageView *statusDetailIconView;
@property (readonly, nonatomic) UILabel *statusDetailLabel;
@property (readonly, nonatomic) CAGradientLayer *userBackgroundLayer;
@property (readonly, nonatomic) UIImageView *userAvatarImageView;
@property (readonly, nonatomic) UILabel *userNickNameLabel;
@property (readonly, nonatomic) UILabel *contentLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL videoCellIsShown;
@property (retain, nonatomic) AWEPOIDetailAwemePlayerViewController *awemePlayer;

- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)updateViewModel:(id)a0;
- (void)createSubViews;
- (void)createLivePlayer;
- (void)destroyLivePlayer;
- (void)setupSubviewsLayoutConstraint;
- (void)didTapGestureHandler:(id)a0;
- (void)stopPlayingLive;
- (void)startPlayingLive;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)player;
- (id)playerView;
- (void)didResignActive;
- (void)layoutSubviews;
- (void)dealloc;
- (id)transitionView;
- (void)setupUI;
- (void)didEndDisplaying;

@end
