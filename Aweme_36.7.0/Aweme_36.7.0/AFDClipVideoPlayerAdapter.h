@class AWEVideoModel, UIView;
@protocol IESVideoPlayerProtocol;

@interface AFDClipVideoPlayerAdapter : NSObject <IESVideoPlayerDelegate, AFDClipVideoPlayerAdapterProtocol, AFDClipVideoLikePlayerAdapterProtocol> {
    void /* unknown type, empty encoding */ enableHDR;
    void /* unknown type, empty encoding */ _muted;
    void /* unknown type, empty encoding */ srConfig;
    void /* function */ didReadyBlock;
    void /* function */ playerWillLoopPlayingBlock;
    void /* unknown type, empty encoding */ playFailedBlock;
    void /* function */ playbackTimeBlock;
    void /* unknown type, empty encoding */ _isPlayerReady;
    void /* unknown type, empty encoding */ referString;
    void /* unknown type, empty encoding */ enterFrom;
    void /* unknown type, empty encoding */ groupID;
    void /* unknown type, empty encoding */ authorID;
    void /* unknown type, empty encoding */ index;
    void /* unknown type, empty encoding */ totalPlayTime;
    void /* unknown type, empty encoding */ startTimestamp;
    void /* unknown type, empty encoding */ initialTimestamp;
    void /* unknown type, empty encoding */ hasTrackedFinish;
}

@property (nonatomic, retain) AWEVideoModel *video;
@property (nonatomic, readonly) UIView *playerView;
@property (nonatomic) BOOL enableSR;
@property (nonatomic, weak) void /* function */ containerView;
@property (nonatomic) BOOL muted;
@property (nonatomic, retain) id<IESVideoPlayerProtocol> playerController;
@property (nonatomic, copy) id /* block */ didReadyBlock;
@property (nonatomic, copy) id /* block */ playerWillLoopPlayingBlock;
@property (nonatomic, copy) id /* block */ playbackTimeBlock;
@property (nonatomic) BOOL isPlayerReady;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)playerWillLoopPlaying:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })updateVideoScaleModeIsInFullPage:(BOOL)a0 albumContentMode:(unsigned long long)a1;
- (id)takeAwayPlayerController;
- (void)updateWithAnotherPlayerAdapter:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (void)stop;
- (void)seekToTime:(double)a0;
- (void)dealloc;

@end
