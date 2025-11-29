@class BDAirPlayDisplayPlayer;

@interface BDAirPlayDisplayViewController : UIViewController

@property (weak, nonatomic) BDAirPlayDisplayPlayer *player;

- (void)resumePlay;
- (void)notifyError:(id)a0;
- (void)setPlaySpeed:(float)a0;
- (void)addVolume;
- (void)reduceVolume;
- (void)notifyPlayStatus:(unsigned long long)a0;
- (void)notifyProgressInfo:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (void)setVolume:(long long)a0;
- (void)viewDidLoad;
- (void)seekTo:(long long)a0;

@end
