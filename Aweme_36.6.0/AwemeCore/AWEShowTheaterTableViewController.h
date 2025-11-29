@class AWEShowTheaterListDataController, NSDictionary, NSArray, AWEShowTheaterPageContext, NSString, UIViewController;
@protocol AWEAwemeDetailTableViewControllerProtocol;

@interface AWEShowTheaterTableViewController : UIViewController <AWEAwemeDetailTableViewControllerDelegate, AWEModernFullscreenTransitionInnerContextProvider, AWERouterViewControllerProtocol, AWEShowTheaterTableViewControllerProtocol>

@property (retain, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *detailTableViewController;
@property (retain, nonatomic) AWEShowTheaterListDataController *dataController;
@property (retain, nonatomic) NSDictionary *paramDictionary;
@property (retain, nonatomic) NSArray *initialModelList;
@property (nonatomic) BOOL recommendToastPopped;
@property (nonatomic) BOOL firstVideoPlayed;
@property (nonatomic) BOOL hasScrolled;
@property (nonatomic) BOOL shouldAutoShowEpisodeSelectPanel;
@property (nonatomic) BOOL padRotateEnabled;
@property (nonatomic) BOOL legacyMode;
@property (retain, nonatomic) AWEShowTheaterPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isOnFeedSharePanel:(id)a0;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)detailTableViewController:(id)a0 scrollDidEndAtIndexPath:(id)a1 model:(id)a2;
- (void)detailTableViewControllerWillDisappear:(id)a0 currentAwemeModel:(id)a1;
- (void)videoPlayerDidReadyForDisplay:(id)a0;
- (void)videoPlayerWillStartNextLoop:(id)a0;
- (void)detailTableViewController:(id)a0 awemeModel:(id)a1 didChangePlaybackStateWithAction:(long long)a2;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)awe_preferredTransitionProviderClassNameForContext:(id)a0;
- (long long)modernTransitionItemOffset;
- (BOOL)modernTransitionItemHasScrolled;
- (id)modernTransitionContext;
- (BOOL)modernTransitionItemHasScrolledUpdated:(long long)a0;
- (void)configWithParams:(id)a0;
- (void)configUI;
- (id)initWithAwemeModelList:(id)a0 params:(id)a1;
- (id)initWithRVDParams:(id)a0;
- (void)loadPreviousCompletedWithModelList:(id)a0;
- (void)initialFetchCompletedWithInitialIndex:(long long)a0;
- (void)loadMoreHasCompletedWithModelList:(id)a0;
- (BOOL)shouldSendMessageToLynx;
- (void)sendMessageToLynxContainerWithMessageType:(long long)a0 awemeModel:(id)a1;
- (void)configWithLagecyParams:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)addObservers;

@end
