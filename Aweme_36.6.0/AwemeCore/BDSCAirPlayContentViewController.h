@interface BDSCAirPlayContentViewController : UIViewController

- (void)resumePlay;
- (void)notifyError:(id)a0;
- (void)setPlaySpeed:(float)a0;
- (void)addVolume;
- (void)reduceVolume;
- (void)notifyPlayStatus:(unsigned long long)a0;
- (void)notifyProgressInfo:(id)a0;
- (id)parent;
- (void)pause;
- (void)stop;
- (void)setVolume:(long long)a0;
- (void)seekTo:(long long)a0;

@end
