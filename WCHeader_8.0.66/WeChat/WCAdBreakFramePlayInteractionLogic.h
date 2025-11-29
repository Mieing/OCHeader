@class CADisplayLink;

@interface WCAdBreakFramePlayInteractionLogic : WCAdBreakFramePlayBaseLogic

@property (nonatomic) int interactionState;
@property (retain, nonatomic) CADisplayLink *changeAnimationDisplayLink;
@property (nonatomic) double changeAnimationStartTimeMs;
@property (nonatomic) int changeAnimationTargetState;
@property (nonatomic) BOOL beginPosSetFlag;
@property (nonatomic) BOOL hasPlayed;

- (id)initWithBreakFrameInfo:(id)a0 dataItem:(id)a1 alphaVideoView:(id)a2 bTimelineScene:(BOOL)a3;
- (void)dealloc;
- (BOOL)checkPlayMode;
- (void)reset;
- (void)startAlphaVideoPlayIfNeed;
- (void)pauseAlphaVideoPlayIfNeed;
- (void)onSelfLike;
- (void)onSelfCancelLike;
- (void)onSelfComment;
- (void)onPlaybackTimeUpdate:(double)a0;
- (void)onPlayEnd:(BOOL)a0;
- (void)onPlayerSeekComplete:(double)a0;
- (void)initLogic;
- (void)changeToInteractionState:(int)a0;
- (void)changeToInteractionState:(int)a0 neeSeek:(BOOL)a1;
- (id)fetchPlayStateItem:(int)a0;
- (id)fetchCurrentPlayStateItem;
- (BOOL)checkPlaybackTimeInCurrentPlayStateSection:(double)a0;
- (int)fetchNextInteractionState;
- (void)changeToInteractionStateWithAnimation:(int)a0;
- (void)tryToStartChangeWithAnimation:(int)a0;
- (void)stopChangeAnimation;
- (void)displayLinkCheck;
- (void)realPausePlayer;
- (void)resumePlayerAlpha;
- (void)notifyStateChanged;
- (void)reportUserAction:(int)a0;
- (void).cxx_destruct;

@end
