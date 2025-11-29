@class POIMediaPlayerView, UIView;

@interface POIMediaListVideoAlbumCell : POIMediaListCell

@property (retain, nonatomic) POIMediaPlayerView *playerView;
@property (retain, nonatomic) UIView *progressView;

- (long long)currentPlayState;
- (void)albumScrollToIndex:(unsigned long long)a0;
- (void)updateWithMediaModel:(id)a0;
- (void)didSetInteractorContainer;
- (BOOL)mute;
- (void).cxx_destruct;
- (BOOL)play;
- (BOOL)pause;
- (void)prepareForReuse;
- (BOOL)stop;
- (void)setMute:(BOOL)a0;
- (void)didTap;
- (void)willDisplay;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;

@end
