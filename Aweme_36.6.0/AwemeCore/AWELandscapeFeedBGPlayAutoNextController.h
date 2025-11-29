@class NSString;

@interface AWELandscapeFeedBGPlayAutoNextController : AWELandscapeFeedBaseController <AWEAwemeBackgroundPlayAutoNextDelegate>

@property (nonatomic) BOOL isLoadMoreNoMoreData;
@property (nonatomic) BOOL isAppearing;
@property (nonatomic) BOOL isChangingVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEnterLandscape;
- (BOOL)enableBGPlaySettings;
- (BOOL)shouldEnableBGPlayAutoNextFeature;
- (void)playNext:(BOOL)a0;
- (BOOL)tryToPlayWithIndex:(long long)a0 isNext:(BOOL)a1;
- (void)playWithIndex:(long long)a0 isNext:(BOOL)a1;
- (void)trackBackgroundParamsForEvent:(id)a0;
- (void)playPre;
- (BOOL)shouldShowPlayChangeForRemoteControl;
- (BOOL)shouldEnablePlayPreForRemoteControl;
- (void)handleBackgroundPlayPrev;
- (void)handleBackgroundPlayNext;
- (BOOL)backgroundPlayForbidResignNowPlaying;
- (void)handleLandscapeFeedAutoPlayNextNotification:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
