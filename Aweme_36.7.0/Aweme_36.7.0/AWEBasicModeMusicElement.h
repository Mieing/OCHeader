@class AWEMusicCoverButton;

@interface AWEBasicModeMusicElement : AWEBasicModeFakeElement

@property (retain, nonatomic) AWEMusicCoverButton *musicButton;

- (void)playMusicAnimations;
- (void)stopMusicAnimations;
- (void)p_setup;
- (void)pauseMusicAnimations;
- (void)resumeMusicAnimations;
- (void)setModel:(id)a0;
- (void).cxx_destruct;

@end
