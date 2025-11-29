@class NSString, NSMapTable, IESECVideoPlayerView;

@interface IESECReviewsDetailPlayerManager : NSObject <IESECVideoPlayerViewDelegate> {
    NSMapTable *_delegateMap;
    id /* block */ _playerGrabbedBlock;
    IESECVideoPlayerView *_player;
    BOOL _playerIsPlayingWhenApplicationResignActive;
}

@property (nonatomic) long long activatedSectionIndex;
@property (nonatomic) long long activatedRowIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (void)playerDidChangePlaybackStateWithAction:(unsigned long long)a0;
- (void)playerDidReadyForDisplay;
- (BOOL)playerIsPlaying;
- (id)playerWithTarget:(id)a0 playerWillBeGrabbedByTarget:(id /* block */)a1;
- (void)addDelegateTarget:(id)a0;
- (void)seekPlayerToTime:(double)a0;
- (void)stopPlaying;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (void)applicationDidBecomeActive:(id)a0;
- (void)dealloc;

@end
