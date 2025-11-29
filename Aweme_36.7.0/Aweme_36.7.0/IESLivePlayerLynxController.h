@class NSString, IESLivePlayerControllerConfig;
@protocol IESLivePlayerControllerDelegate, IESLivePlayerProtocol;

@interface IESLivePlayerLynxController : NSObject

@property (retain, nonatomic) id<IESLivePlayerProtocol> player;
@property (copy, nonatomic) NSString *sdkKey;
@property (weak, nonatomic) id<IESLivePlayerControllerDelegate> delegate;
@property (retain, nonatomic) IESLivePlayerControllerConfig *playerConfig;
@property (copy, nonatomic) id /* block */ appInfoFetchBlock;
@property (copy, nonatomic) id /* block */ reportStateBlock;
@property (copy, nonatomic) id /* block */ trackBlock;

- (void)updateTVLSettings:(id)a0;
- (void)reloadWithStreamData:(id)a0 defaultSDKKey:(id)a1;
- (void)updateSDKKey:(id)a0;
- (void)setAutoSetAndReleaseAvAudioSessionEnable:(BOOL)a0;
- (void)setPrepareForReuse:(BOOL)a0;
- (void)reloadWithStreamData;
- (void)setVideoRenderingEnable:(BOOL)a0;
- (void)updatePlayerConfig:(id)a0;
- (id)initWithPlayerConfig:(id)a0;
- (void)enqueueLivePlayer;
- (void)setPlayerInnerBlock;
- (void)close;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)setMuted:(BOOL)a0;
- (BOOL)isPlaying;
- (void)stop;
- (id)playerView;
- (void)setScaleType:(long long)a0;

@end
