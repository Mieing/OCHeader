@class AWEVideoModel, UIView;
@protocol IESVideoPlayerProtocol;

@interface AWEMultiContentImpl.VideoContentDelegate : NSObject <AFDClipVideoPlayerAdapterProtocol, AFDClipVideoLikePlayerAdapterProtocol> {
    void /* unknown type, empty encoding */ cell;
    void /* function */ playerWillLoopPlayingBlock;
    void /* function */ playbackTimeBlock;
}

@property (nonatomic) BOOL muted;
@property (nonatomic, readonly) BOOL isPlayerReady;
@property (nonatomic) BOOL enableSR;
@property (nonatomic, copy) id /* block */ playerWillLoopPlayingBlock;
@property (nonatomic, copy) id /* block */ playbackTimeBlock;
@property (nonatomic, retain) AWEVideoModel *video;
@property (nonatomic, readonly) UIView *playerView;
@property (nonatomic, readonly) id<IESVideoPlayerProtocol> playerController;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, copy) id /* block */ didReadyBlock;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })updateVideoScaleModeIsInFullPage:(BOOL)a0 albumContentMode:(unsigned long long)a1;
- (id)takeAwayPlayerController;
- (void)updateWithAnotherPlayerAdapter:(id)a0 repeated:(BOOL)a1;
- (void)updateWithAnotherPlayerAdapter:(id)a0;
- (void)beginReplacePlayAdapter;
- (void)endReplacePlayAdapter;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (void)stop;
- (void)seekToTime:(double)a0;

@end
