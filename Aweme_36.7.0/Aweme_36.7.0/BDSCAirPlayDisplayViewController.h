@class BDSCAirPlayContentViewController;

@interface BDSCAirPlayDisplayViewController : BDAirPlayDisplayViewController

@property (retain, nonatomic) BDSCAirPlayContentViewController *contentViewController;

- (void)resumePlay;
- (void)setPlaySpeed:(float)a0;
- (void)addVolume;
- (void)reduceVolume;
- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (void)setVolume:(long long)a0;
- (void)viewDidLoad;
- (void)seekTo:(long long)a0;

@end
