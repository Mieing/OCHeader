@class AWEMusicImageSetAnimationView;

@interface AWEMusicFeedMusicItemViewController : AWEMusicFeedBaseItemViewController

@property (retain, nonatomic) AWEMusicImageSetAnimationView *imageSetAnimView;
@property (nonatomic) BOOL isPlaying;

- (BOOL)awe_shouldAutorotate;
- (void)playerReadyToPlay:(BOOL)a0;
- (void)playStatusChanged:(long long)a0;
- (void)itemViewDidAppear;
- (void)itemViewDidDisappear;
- (void)attachModel:(id)a0 identifier:(id)a1;
- (void)mainFeed_viewWillAppear;
- (void)playerControlViewProgressGestureDidEnd:(id)a0 currentTime:(double)a1 progress:(double)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setDuration:(double)a0;
- (void)updateUI;

@end
