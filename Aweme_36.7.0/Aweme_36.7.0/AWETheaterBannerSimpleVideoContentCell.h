@class UIImageView, UILabel, NSString;
@protocol IESVideoPlayerProtocol;

@interface AWETheaterBannerSimpleVideoContentCell : AWETheaterBannerBaseContentCell <IESVideoPlayerDelegate>

@property (retain, nonatomic) id<IESVideoPlayerProtocol> currentPlayer;
@property (retain, nonatomic) UIImageView *soundImageView;
@property (retain, nonatomic) UILabel *bannerTitleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)configWithSectionItem:(id)a0 context:(id)a1 logExtraDict:(id)a2;
- (void)soundImageViewTapped;
- (void)playerWillLoopPlaying:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)updateMuteStatus:(BOOL)a0;
- (void)stop;
- (void)setupUI;

@end
