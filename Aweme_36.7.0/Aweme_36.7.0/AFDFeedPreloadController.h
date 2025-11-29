@class NSArray, NSDictionary, AFDFeedPreloader, AWEAwemeModel, NSIndexPath, NSString;

@interface AFDFeedPreloadController : NSObject <AFDFeedPreloaderDelegate, AFDFeedPreloadControllerProtocol>

@property (retain, nonatomic) AFDFeedPreloader *preloader;
@property (copy, nonatomic) NSArray *awemes;
@property (retain, nonatomic) NSIndexPath *currentPlayingIndexPath;
@property (retain, nonatomic) AWEAwemeModel *currentPlayingAweme;
@property (nonatomic) BOOL isCurrentPlayingAwemeTotallyBuffered;
@property (nonatomic) BOOL isInFriendsTab;
@property (retain, nonatomic) NSDictionary *secondStagePreloadStatus;
@property (readonly, nonatomic) NSString *referString;
@property (copy, nonatomic) id /* block */ awemesProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willPlayAweme:(id)a0 atIndex:(long long)a1;
- (void)willPlayStory:(id)a0 atIndexPath:(id)a1;
- (void)didFinishBufferingAweme:(id)a0;
- (void)preloadDataSourceDidChangeWithReason:(long long)a0;
- (id)initWithReferString:(id)a0;
- (void)handleApplicationWillEnterForegroundNotification:(id)a0;
- (void)handleApplicationDidEnterBackgroundNotification:(id)a0;
- (void)handleTabBarSelectionDidChangeNotification:(id)a0;
- (id)preloadItemsFromAwemes:(id)a0;
- (void)startPreloadingWithPreloadItems:(id)a0;
- (id)preloadItemsFromAwemes:(id)a0 withPreloadSize:(long long)a1 timeoutInterval:(double)a2 alwaysPreloadFromZero:(BOOL)a3;
- (void)startPreloading;
- (BOOL)updateAwemesIfNeeded;
- (BOOL)isPreloadingAsExpected;
- (void).cxx_destruct;
- (void)dealloc;

@end
