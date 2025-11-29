@class NSObject, NSString, AWESearchResultViewController, AWESearchAutoPlayHandler, AWESearchSchemaModel, AWESearchTabConfig, AWESearchEasterEggView, SearchCachalotView, AWETrackerContext, AWESearchFloatingBackgroundView;
@protocol AWESearchActionListenerProtocol, AWESearchFeelGoodManagerProtocol, AWESearchChildViewControllerResultFilterProtocol;

@interface AWEEcomPhotoSearchCachalotLynxAdapter : UIViewController <AWESearchResultControllerProxyProtocol, AWESearchAutoPlayContainerProtocol, AWESearchDynamicPreLayoutProtocol>

@property (retain, nonatomic) AWESearchAutoPlayHandler *autoPlayHandler;
@property (weak, nonatomic) SearchCachalotView *cachalotView;
@property (copy, nonatomic) id /* block */ singleTapEnterAwemeDetailBlockWithPlayer;
@property (retain, nonatomic) AWESearchTabConfig *tabConfig;
@property (weak, nonatomic) id<AWESearchChildViewControllerResultFilterProtocol> delegate;
@property (weak, nonatomic) id<AWESearchActionListenerProtocol> listener;
@property (weak, nonatomic) AWESearchResultViewController *searchResultViewController;
@property (retain, nonatomic) AWETrackerContext *trackerContext;
@property (retain, nonatomic) AWESearchSchemaModel *routerModel;
@property (copy, nonatomic) id /* block */ searchTabsUpdateBlock;
@property (nonatomic) BOOL isFilterSearch;
@property (nonatomic) unsigned long long publishTime;
@property (nonatomic) unsigned long long sortType;
@property (nonatomic) unsigned long long refreshType;
@property (retain, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL dismissTabBottomLine;
@property (retain, nonatomic) AWESearchFloatingBackgroundView *floatingBackgroundView;
@property (retain, nonatomic) AWESearchEasterEggView *easterEggView;
@property (nonatomic) long long searchTabFeedType;
@property (copy, nonatomic) NSString *personalSearchChannel;
@property (copy, nonatomic) NSString *personalTrackTabType;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *tokenType;
@property (copy, nonatomic) NSString *clickMoreMethod;
@property (nonatomic) long long searchQueryInputTime;
@property (nonatomic) long long searchButtonPressDuration;
@property (nonatomic) long long searchButtonClickPositionX;
@property (nonatomic) long long searchButtonClickPositionY;
@property (copy, nonatomic) id /* block */ isShowingMiddlePageBlock;
@property (copy, nonatomic) id /* block */ sugSessionIDBlock;
@property (retain, nonatomic) NSObject<AWESearchFeelGoodManagerProtocol> *surveyManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)lynxAsyncOptEnable;
+ (void)preprocessModel:(id)a0;

- (void)scrollToContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1 invalidateLayout:(BOOL)a2;
- (id)feedScrollView;
- (id)scrollProxy;
- (void)registerBizDelegate:(id)a0;
- (void)scrollToViewModel:(id)a0 positionType:(unsigned long long)a1 animated:(BOOL)a2;
- (void)saveSearchWord:(id)a0 wordType:(id)a1;
- (id)customAutoplayRules;
- (id)generateControllerContext;
- (id)cachalotContainerView;
- (void)autoPlayBecomeActiveIfNeed;
- (void)autoPlayResignActiveIfNeed;
- (void)autoPlayForceBecomeActiveWith:(id)a0;
- (void)removeBizDelegate:(id)a0;
- (id)visibleCells;
- (void).cxx_destruct;
- (void)scrollToContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (BOOL)autoPlay;
- (struct CGPoint { double x0; double x1; })currentContentOffset;

@end
