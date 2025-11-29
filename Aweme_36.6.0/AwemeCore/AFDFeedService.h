@class NSString, AWEStorage;
@protocol AFDFeedStorage;

@interface AFDFeedService : HTSService <AFDFeedService>

@property (readonly, nonatomic) AWEStorage<AFDFeedStorage> *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL clearScreen;

- (id)createPlayInteractionViewController;
- (void)requestAwemeItemWithID:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
- (void)resumePlayerIfPausedBySingleClick;
- (void)didTurnAweme:(id)a0 toPrivateType:(unsigned long long)a1;
- (id)didStartPlayingAwemeVideoNotificationName;
- (id)didStartPlayingAwemeImageNotificationName;
- (id)createSearchUserManager;
- (BOOL)shouldShowBottomShootView:(id)a0 enterFrom:(id)a1;
- (void)preparePreloadForAweme:(id)a0 bsModel:(id *)a1 URLModel:(id *)a2 dashResolution:(unsigned long long *)a3;
- (id)prefetchedBSModelForAweme:(id)a0;
- (id)createAwemeMusicInfoView;
- (id)createFeedVideoButton;
- (id)createShareFeedVideoButton;
- (id)createFollowButton;
- (id)createPlayVideoViewController;
- (id)createAwemePlayVideoViewController:(id)a0;
- (void)preloadDataWithModel:(id)a0 group:(id)a1 preloadSize:(long long)a2 banPreload:(BOOL)a3 completion:(id /* block */)a4;
- (void)cancelPreloadWithGroup:(id)a0;
- (void)transferToAwemeNormalWithAwemeModel:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2;
- (BOOL)isSplashShowing;
- (BOOL)isSplashShown;
- (id)splashDisappearNotificationName;
- (BOOL)hasCreatedLiveRoom;
- (BOOL)isLiveGuideShowing;
- (id)createImageAwemeDisplayViewController;
- (id)bridgedImageAwemeDisplayViewControllerWithObject:(id)a0;
- (void)handleBridgeBroken;
- (id)imageNamed:(id)a0;

@end
