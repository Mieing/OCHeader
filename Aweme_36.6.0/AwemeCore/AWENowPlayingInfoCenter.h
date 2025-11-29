@protocol AWENowPlayingInfoPlayerProtocol;

@interface AWENowPlayingInfoCenter : NSObject

@property (weak, nonatomic) id<AWENowPlayingInfoPlayerProtocol> playingPlayer;
@property (nonatomic) BOOL remoteCommandTargetSelf;

+ (id)defaultCenter;

- (void)refreshNowPlayingInfo;
- (void)refreshRemoteCommandEnable;
- (void)becomePlayingPlayer:(id)a0;
- (void)resignPlayingPlayer:(id)a0;
- (void)addRemoteCommandTarget;
- (void)removeRemoteCommandTarget;
- (long long)handlePlayCommand;
- (long long)handlePauseCommand;
- (long long)handlePlayNextCommand;
- (long long)handleChangePlaybackPositionCommand:(id)a0;
- (long long)handleSkipForwardCommand:(id)a0;
- (long long)handleSkipBackwardCommand:(id)a0;
- (long long)handleLikeCommand:(id)a0;
- (void).cxx_destruct;
- (void)setNowPlayingInfo:(id)a0;
- (id)init;
- (void)applicationWillTerminate;
- (long long)handlePreviousCommand;

@end
