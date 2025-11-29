@class NSString, AWETeenLandscapeAlbumPanelContainer;

@interface AWETeenLandscapeAlbumVideoViewController : AWETeenLandscapeFeedBaseViewController <AWETeenCustomDisplayViewControllerDelegate, AWETeenPanelPresentPortocol>

@property (retain, nonatomic) AWETeenLandscapeAlbumPanelContainer *albumPanel;
@property (nonatomic) double albumPanelStartTimestamp;
@property (nonatomic) double albumPanelTotalTime;
@property (nonatomic) BOOL shouldTryCast;
@property (nonatomic) BOOL isIPAlbum;
@property (nonatomic) BOOL shouldShowAlbumPanelWhenEnter;
@property (nonatomic) long long initialProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentAwemeModel;
- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)awesst_enterFrom;
- (BOOL)awesst_isVideoPlayViewController;
- (id)awesst_additionalTrackerParams;
- (void)p_setupViews;
- (void)p_layoutViews;
- (void)castPlayDidFinish;
- (id)initWithDataController:(id)a0 initialEpisode:(long long)a1 albumEnterFrom:(id)a2 didPlayEnd:(BOOL)a3 templateVideoController:(id)a4 landscapeType:(long long)a5 extra:(id)a6 isIPAlbum:(BOOL)a7;
- (void)p_updateAlbumCollectStatus:(id)a0;
- (void)p_albumCollectAction:(id)a0;
- (void)playerWillLoopPlayingWithAwemeID:(id)a0 videoID:(id)a1 currentTime:(double)a2;
- (void)willPresentPanel:(id)a0;
- (void)didPresentPanel:(id)a0;
- (void)willDismissPanel:(id)a0;
- (void)didDismissPanel:(id)a0;
- (void)interactionPlayButtonClicked:(BOOL)a0;
- (void)interactionSelectAlbumClicked;
- (void)interactionExitLandscapeClicked;
- (void)interactionNextEpisodeButtonClicked;
- (void)initPlaybackRate;
- (id)initWithDataController:(id)a0 initialEpisode:(long long)a1 albumEnterFrom:(id)a2 didPlayEnd:(BOOL)a3 templateVideoController:(id)a4 landscapeType:(long long)a5 extra:(id)a6;
- (void)p_trackVideoListShowDuration;
- (void)updatePlaybackRate;
- (void)p_updateSpecificAlbumIfNeeded;
- (void)landscapeBackBtnClicked;
- (id)landscapeDisplayModelAtIndex:(long long)a0;
- (void)landscapeAppWillResignActive:(id)a0;
- (void)p_playVideoAtIndex:(long long)a0;
- (void)p_presentRecommendView;
- (void)p_trackNextClicked;
- (void)p_fetchRecommendAlbums;
- (long long)currentIndex;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setCurrentIndex:(long long)a0;

@end
