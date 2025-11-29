@interface WCAdBreakFramePlayNormalLogic : WCAdBreakFramePlayBaseLogic

@property (nonatomic) BOOL alreadyPlayed;
@property (nonatomic) BOOL isOnceMorePlaying;
@property (nonatomic) BOOL beginPosSetFlag;

- (BOOL)checkPlayMode;
- (void)reset;
- (void)startAlphaVideoPlayIfNeed;
- (void)pauseAlphaVideoPlayIfNeed;
- (void)onReferenceVideoPlaybackTimeUpdate:(double)a0 isPlaying:(BOOL)a1;
- (void)onPlaybackTimeUpdate:(double)a0;
- (void)onPlayEnd:(BOOL)a0;

@end
