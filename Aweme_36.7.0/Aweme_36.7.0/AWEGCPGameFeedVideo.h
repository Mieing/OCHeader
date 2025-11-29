@class NSString, NSDictionary, AWEAwemeModel, UIView, UIViewController;
@protocol AWEPlayVideoViewControllerProtocol, AFDSlidesViewProtocol, AWEGCPGameFeedVideoDelegate;

@interface AWEGCPGameFeedVideo : UIView <AWEPlayVideoDelegate, AWEPlayVideoViewControllerStatusDelegate, IESVideoPlayerDelegate, AWEGCPGameFeedVideoProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL isPlayed;
@property (retain, nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> *playVideoViewController;
@property (retain, nonatomic) UIView<AFDSlidesViewProtocol> *imageSliderView;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long defaultImageIndex;
@property (nonatomic) double defaultSeekToTime;
@property (nonatomic) BOOL videoContentAspectFill;
@property (weak, nonatomic) id<AWEGCPGameFeedVideoDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)player:(id)a0 playbackFailedForURL:(id)a1 error:(id)a2;
- (void)player:(id)a0 didChangeStallState:(long long)a1 actionType:(long long)a2 reason:(unsigned long long)a3;
- (void)updatePlayerIfNeeded;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)progressDidUpdateWithIndex:(long long)a0 progress:(double)a1 duration:(double)a2 animated:(BOOL)a3;
- (void)videoController:(id)a0 playerPlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)updateVideoFrame;
- (void)videoUpdatePlayerControllerWithPlayVideoVC:(id)a0;
- (void)videoUpdatePlayerControllerWithPlayState:(long long)a0;
- (void)updateLogExtra:(id)a0;
- (void)setupPlayVideoView;
- (id)createImageSliderView:(id)a0;
- (BOOL)isAlbumPlayer:(id)a0;
- (void)setupAlbumSliderView;
- (BOOL)enableAlbumPlayer;
- (void)videoUpdatePlayerControllerWithNewPlayState:(long long)a0;
- (void)scrollToDefaultImageIndexIfNeeded;
- (long long)currentImageIndex;
- (void)playerWillLoopPlaying:(id)a0;
- (void).cxx_destruct;
- (BOOL)play;
- (void)pause;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (double)currentPlaybackTime;
- (void)dealloc;
- (void)setupUI;
- (void)updateWithModel:(id)a0;
- (void)frameDidChange;

@end
