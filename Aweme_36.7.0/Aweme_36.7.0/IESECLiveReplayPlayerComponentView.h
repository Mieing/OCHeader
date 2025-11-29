@class IESECLiveGoodsReplayVideoModel, NSString, UIImageView, IESECLiveReplayPlayerWrapper, IESECLiveReplayDataStore, NSMutableArray;

@interface IESECLiveReplayPlayerComponentView : UIView <IESECLiveReplayPlayerWrapperDelegate, IESECLiveReplayComponentViewProtocol, IESECLiveReplayPlayControlProtocol>

@property (retain, nonatomic) IESECLiveReplayPlayerWrapper *playerWrapper;
@property (retain, nonatomic) UIImageView *playImageView;
@property (nonatomic) long long totalDuration;
@property (nonatomic) double totalPlayTime;
@property (nonatomic) BOOL hasEverBeenPlayed;
@property (nonatomic) BOOL hasSetupPlayResource;
@property (nonatomic) long long preloadStatus;
@property (nonatomic) BOOL isReloadVideoActionInvoke;
@property (retain, nonatomic) NSMutableArray *waitRequestBackBlocks;
@property (retain, nonatomic) IESECLiveGoodsReplayVideoModel *currentVideoInfo;
@property (retain, nonatomic) IESECLiveReplayDataStore *dataStore;
@property (nonatomic) BOOL replayVideoDeleted;
@property (copy, nonatomic) id /* block */ progressDidUpdate;
@property (copy, nonatomic) NSString *playerTag;
@property (copy, nonatomic) NSString *playerSubTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isPlaying;

- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewWillDisappear:(BOOL)a0;
- (void)setCurrentPlaybackTime:(double)a0 complete:(id /* block */)a1 renderComplete:(id /* block */)a2;
- (void)seekToProgress:(double)a0;
- (void)dataStoreChanged;
- (void)videoReadyToDisPlayOfPlayerController:(id)a0;
- (void)playerController:(id)a0 updateCacheProgress:(double)a1;
- (void)playerController:(id)a0 updateProgress:(double)a1 duration:(double)a2;
- (void)playerController:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)playerController:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)playerController:(id)a0 playerDidFinishError:(id)a1;
- (void)playerController:(id)a0 userStop:(id)a1;
- (BOOL)canPlayCurrentVideo;
- (void)reloadAndPlayWithVideo:(id)a0;
- (void)setupWithMBRPlayer:(id)a0;
- (void)setupWithIESPlayer:(id)a0;
- (void)playerController:(id)a0 onSubtitleInfoCallBack:(id)a1 context:(id)a2;
- (void)preloadAndPlayWithVideo:(id)a0;
- (void)trigerWaitRequestBackBlocksIfNeeded;
- (void)setupSubViews;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)reload;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSpeed:(double)a0;
- (void)toggle;
- (void)resetPlayer;

@end
