@class NSString, RingToneAvPlayer, RingToneFinderPlayerView, NSObject;
@protocol RingTonePlayer;

@interface RingToneMixPlayer : NSObject <RingTonePlayerExt, RingTonePlayer>

@property (retain, nonatomic) NSObject<RingTonePlayer> *curPlayer;
@property (retain, nonatomic) RingToneFinderPlayerView *finderPlayerView;
@property (retain, nonatomic) RingToneAvPlayer *avPlayer;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL customVibrateEnabled;
@property (nonatomic) BOOL shouldPlayForcibly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)playDefaultRing;
- (void)playRing:(id)a0;
- (void)__playRing:(id)a0 isUsingFinderPlayer:(BOOL)a1;
- (void)stopPlay;
- (void)stopAllPlay;
- (double)currentPlayTime;
- (void)setVolume:(double)a0;
- (void).cxx_destruct;

@end
