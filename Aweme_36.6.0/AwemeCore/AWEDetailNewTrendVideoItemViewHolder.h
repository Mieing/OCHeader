@class NSString, TTVideoEngine, UIView, UIViewController;
@protocol AFDRichContentContainerViewControllerProtocol;

@interface AWEDetailNewTrendVideoItemViewHolder : AWEBaseListViewHolder <TTVideoEngineDelegate>

@property (retain, nonatomic) TTVideoEngine *playerController;
@property (retain, nonatomic) UIViewController<AFDRichContentContainerViewControllerProtocol> *richContentContainer;
@property (retain, nonatomic) UIView *videoBackgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewHolder;
- (void)videoEngineUserStopped:(id)a0;
- (void)videoEngine:(id)a0 playbackStateDidChanged:(long long)a1;
- (void)videoEngineDidFinish:(id)a0 error:(id)a1;
- (void)videoEngineDidFinish:(id)a0 videoStatusException:(long long)a1;
- (void)videoEngineCloseAysncFinish:(id)a0;
- (double)currentPlayTime;
- (void)stopCurrentVideo;
- (void)pauseCurrentVideo;
- (void)resetPlayCurrentVideo;
- (void)resetPlayCurrentVideoByCurrentTime;
- (void)trendVideoItemCellPlayVideoActionWithModel:(id)a0 targetCell:(id)a1;
- (void)trendVideoItemCellPlayVideoActionWithVideoUrls:(id)a0 URI:(id)a1 targetCell:(id)a2 awemeModel:(id)a3;
- (BOOL)isNeedVideoFilledStatus:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)setupPlayer;

@end
