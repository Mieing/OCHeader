@class UILabel, AWERelatedVideoPlayingAnimationView;

@interface AWEMVChannelPlayerCardEpisodeElement : AWEMVChannelPlayerCardBaseElement

@property (retain, nonatomic) UILabel *episodeLabel;
@property (retain, nonatomic) AWERelatedVideoPlayingAnimationView *playingAnimationView;

- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
