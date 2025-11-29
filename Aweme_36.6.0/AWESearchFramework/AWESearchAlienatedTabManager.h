@class NSMutableArray, NSMutableDictionary, AWESearchAlienatedTabTrackManager, NSString, AWESearchResultViewController, AWESearchSlidingTabbarView;
@protocol AWESearchTabManagerProtocol;

@interface AWESearchAlienatedTabManager : NSObject

@property (weak, nonatomic) AWESearchSlidingTabbarView *slidingTabbarView;
@property (weak, nonatomic) id<AWESearchTabManagerProtocol> tabManager;
@property (weak, nonatomic) AWESearchResultViewController *searchResultViewController;
@property (nonatomic) BOOL isBackgroundColorVisible;
@property (nonatomic) unsigned long long searchTheme;
@property (retain, nonatomic) NSMutableDictionary *cachedAlienatedTabs;
@property (retain, nonatomic) NSMutableArray *presentingAlienatedTabTypes;
@property (retain, nonatomic) NSMutableArray *exitedAlienatedTabTypes;
@property (retain, nonatomic) NSMutableArray *untimelyAlienatedTabTypes;
@property (retain, nonatomic) NSMutableArray *expiredAlienatedTabTypes;
@property (retain, nonatomic) AWESearchAlienatedTabTrackManager *trackManager;
@property (copy, nonatomic) NSString *lastQuery;
@property (copy, nonatomic) NSString *logID;

- (void)beginRefresh;
- (id)initWithTabManager:(id)a0 searchResultViewController:(id)a1;
- (void)updateGeneralSearchRequestTabGuideTrackParams:(id)a0;
- (void)updateAlienatedTabsWithBackgroundColorVisible:(BOOL)a0 theme:(unsigned long long)a1 logID:(id)a2;
- (void)clearAlienatedTabs;
- (void)trackForAlienatedTabShow;
- (void)prefetchAlienatedTabImage;
- (void)sendAlienatedTabShowEventWithModel:(id)a0 tabShowSuccess:(BOOL)a1 failType:(long long)a2;
- (id)mutableArrayFromMutableSet:(id)a0;
- (id)cachedImageFromURLString:(id)a0;
- (void)refreshTabTitleIfNeededWithModels:(id)a0;
- (void)setupTabBarView:(id)a0;
- (BOOL)isAlienatedTab:(id)a0;
- (void)storageAlienatedTabs:(id)a0 enableAlienatedTabs:(BOOL)a1 cancelFlag:(BOOL)a2 logID:(id)a3;
- (void)refreshTabSelectionLineColorIfNeeded;
- (void)tabSelectWithIndex:(long long)a0 keyword:(id)a1 currentTabType:(unsigned long long)a2;
- (void).cxx_destruct;

@end
