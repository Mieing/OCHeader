@class TPPlayerLayerViewContainer, NSString, TPPlayerVideo, TPPlayerLogContext;

@interface TPSlicePlayer : TPAVPlayer <TPAVPlayerDelegate> {
    BOOL isPlayInPIP;
    long long _currentClipIndex;
}

@property (retain, nonatomic) TPPlayerVideo *video;
@property (retain, nonatomic) TPSlicePlayer *nextPlayer;
@property (nonatomic) BOOL needToNotifySeekCompleteAfterPrepared;
@property (nonatomic) BOOL needToSwitchPlayerAfterPrepared;
@property (nonatomic) BOOL isPausedByUser;
@property (nonatomic) BOOL isCachingNext;
@property (retain, nonatomic) TPPlayerLogContext *log;
@property (retain, nonatomic) TPPlayerLayerViewContainer *containerView;
@property (nonatomic) long long playOrder;
@property (nonatomic) double VROutputInterval;
@property (readonly, nonatomic) BOOL needToCacheNext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)updateContext:(id)a0;
- (void)loadVideo:(id)a0;
- (void)updateVideo:(id)a0;
- (long long)totalBufferedDuration;
- (void)stop;
- (void)pause;
- (void)play;
- (void)setRate:(float)a0;
- (void)setVolume:(float)a0;
- (void)setVideoGravity:(id)a0;
- (void)setAllowsExternalPlayback:(BOOL)a0;
- (void)setExternalPlaybackVideoGravity:(id)a0;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)a0;
- (void)startOutputFrame:(double)a0;
- (void)playNext;
- (void)cacheNext;
- (void)cachePlayerWithOrder:(unsigned long long)a0 video:(id)a1 autoSwitchPlayer:(BOOL)a2 needToNotifySeekComplete:(BOOL)a3;
- (id)assemblePlayerWithOrder:(unsigned long long)a0 autoSwitchPlayer:(BOOL)a1 needToNotifySeekComplete:(BOOL)a2 previousPlayer:(id)a3;
- (void)jumpToSlice:(long long)a0 offsetPosition:(long long)a1 withSeekMode:(long long)a2;
- (void)switchToNextPlayer;
- (long long)currentClipIndex;
- (void)player:(id)a0 loadStateDidChange:(long long)a1;
- (void)player:(id)a0 playbackStateDidChange:(long long)a1;
- (void)player:(id)a0 didErrorOccurred:(id)a1;
- (void)player:(id)a0 seekCompleted:(BOOL)a1;
- (void)player:(id)a0 airplayDidActive:(BOOL)a1;
- (void)player:(id)a0 timeBaseValueChange:(double)a1;
- (void)player:(id)a0 onVideoFrame:(struct __CVBuffer { } *)a1;
- (void)player:(id)a0 naturalSizeAvailableWithSize:(struct CGSize { double x0; double x1; })a1;
- (id)player:(id)a0 assembleAVAssetWithIndex:(unsigned long long)a1;
- (void)player:(id)a0 videoEndOfOnePlayLoop:(id)a1;
- (void)playerFirstFrameRendered:(id)a0;
- (void)player:(id)a0 didFailedToPlayToEndWithError:(id)a1;
- (void)setCurrentClipIndex:(long long)a0;
- (BOOL)isPlayInPIP;
- (void)setIsPlayInPIP:(BOOL)a0;
- (void).cxx_destruct;

@end
