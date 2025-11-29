@class NSString;
@protocol IESVideoPlayerProtocol;

@interface AWETC21VideoPlayerAdapter : NSObject <IESVideoPlayerDelegate, TC21VideoPlayerProtocol>

@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ stateBlock;
@property (copy, nonatomic) id /* block */ stallBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)player:(id)a0 didChangeStallState:(long long)a1;
- (void)setVideoModel:(id)a0;
- (void)configPlayer;
- (void)addPeriodicTimeObserver;
- (void)addPlayEndLog:(BOOL)a0;
- (void)setVideoURLString:(id)a0;
- (void)registerPlayProgressBlock:(id /* block */)a0;
- (void)registerPlayStateBlock:(id /* block */)a0;
- (void)registerPlayerStallBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)stop;
- (void)start;
- (void)seekToTime:(double)a0;
- (id)playerView;
- (void)dealloc;
- (void)setMute:(BOOL)a0;
- (void)setRepeated:(BOOL)a0;
- (void)setScalingMode:(long long)a0;

@end
