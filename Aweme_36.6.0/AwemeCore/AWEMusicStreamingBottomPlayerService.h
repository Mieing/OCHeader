@class NSString;
@protocol AWEMusicStreamingBottomPlayerServiceDelegate, MusicService;

@interface AWEMusicStreamingBottomPlayerService : NSObject <AWEMusicFeedPlayerDelegate, AWEMusicSubPlayerOuterTransitionProvider>

@property (weak, nonatomic) id<AWEMusicStreamingBottomPlayerServiceDelegate> delegate;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *guideKey;
@property (nonatomic) BOOL isCurrentUser;
@property (weak, nonatomic) id<MusicService> musicService;
@property (nonatomic) BOOL shouldShowMusicMainFeedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transition_didPopDoneTransitionWithContext:(id)a0;
- (void)feed:(id)a0 didDismissAnimation:(BOOL)a1;
- (void)showSubPlayerOnVC:(id)a0 WithOpenMethod:(id)a1;
- (void)showQueueVC;
- (void)showSubPlayerOnVC:(id)a0 WithOpenMethod:(id)a1 eventModel:(id)a2;
- (BOOL)canShowBottomPlayer;
- (id)p_buildGuideServiceWithConfig:(id)a0;
- (void).cxx_destruct;

@end
