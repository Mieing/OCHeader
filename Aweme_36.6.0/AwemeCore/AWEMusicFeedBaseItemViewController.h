@class AWEMusicPlaylistCollectionBubble, NSString, UIView, AWEMusicPlayerControlView, AWEMusicFeedViewModel;
@protocol AWEMusicFeedItemDelegate, MusicService;

@interface AWEMusicFeedBaseItemViewController : UIViewController <AWEMusicCycleViewItemProtocol, AWEMusicPlayerControlViewDelegate>

@property (retain, nonatomic) id model;
@property (retain, nonatomic) AWEMusicPlaylistCollectionBubble *addtoPlaylistBubble;
@property (weak, nonatomic) id<MusicService> musicService;
@property (weak, nonatomic) id<AWEMusicFeedItemDelegate> delegate;
@property (retain, nonatomic) AWEMusicPlayerControlView *controlView;
@property (retain, nonatomic) UIView *sceneView;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isCurrent;
@property (nonatomic) BOOL isModelChanged;
@property (retain, nonatomic) AWEMusicFeedViewModel *feedViewModel;
@property (nonatomic) double playbackTime;
@property (nonatomic) unsigned long long appearType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerReadyToPlay:(BOOL)a0;
- (void)itemDidAppear;
- (id)displayView;
- (void)playStatusChanged:(long long)a0;
- (void)itemViewDidAppear;
- (void)itemViewDidDisappear;
- (void)updateCacheProgressTime:(double)a0 animation:(BOOL)a1;
- (void)updatePlayProgressTime:(double)a0 animation:(BOOL)a1;
- (void)attachModel:(id)a0 identifier:(id)a1;
- (void)currentPageWillChangeAnimation:(BOOL)a0;
- (void)itemDidDisappear;
- (void)handleFavoriteStatusChangedNotification:(id)a0;
- (void)p_cancelLunaPopBlock;
- (id)p_eventCommomParams;
- (void)p_delayShowLunaPopView;
- (BOOL)p_canShowLunaPopView;
- (void)p_didLunaPopViewShowed;
- (void)updateRightElements;
- (void)itemViewDidReset;
- (id)collectionButtonView;
- (void)mainFeed_viewDidAppear;
- (void)mainFeed_viewWillAppear;
- (void)showPlaylistToastwithCollectionType:(unsigned long long)a0 withContent:(id)a1;
- (void)showCollectionListToastWithCollectionType:(unsigned long long)a0 withContent:(id)a1 confirmBlock:(id /* block */)a2;
- (void)playerControlViewProgressGestureBeginDrag:(id)a0;
- (void)playerControlViewProgressGestureDidChange:(id)a0 currentTime:(double)a1 progress:(double)a2;
- (void)playerControlViewProgressGestureDidEnd:(id)a0 currentTime:(double)a1 progress:(double)a2 completion:(id /* block */)a3;
- (void)playerControlView:(id)a0 collectionType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)playerControlViewPanelTapped:(id)a0 scene:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setDuration:(double)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateUI;

@end
