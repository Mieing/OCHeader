@class AWEBubble, NSMutableDictionary, UIView, NSObject, UILabel;
@protocol AWESearchEntranceManagerProtocol;

@interface AWEAwemeDetailNaviBarSearchBarElement : AWEAwemeDetailNaviBarBaseSearchElement {
    UIView *_discoverEntranceView;
}

@property (retain, nonatomic) NSMutableDictionary *searchAnchorAppearResults;
@property (retain, nonatomic) NSObject<AWESearchEntranceManagerProtocol> *recommendWordManager;
@property (retain, nonatomic) AWEBubble *searchBarbubble;
@property (retain, nonatomic) UIView *customBubbleView;
@property (retain, nonatomic) UILabel *customBubbleLabel;

+ (Class)aAWEBackgroundPlayAdapterClass;

- (void)initializeElement;
- (id)discoverEntranceView;
- (void)setDiscoverEntranceView:(id)a0;
- (void)addNotifications;
- (void)setupBind;
- (id)aAWEBackgroundPlayAdapter;
- (void)viewDidAppearForGuide;
- (void)viewWillAppearWithAwemeModel:(id)a0;
- (void)viewDidLoadForUpdateRecommendWordMananger;
- (void)viewDidLoadForFetchRecommendWordWithAwemeModel:(id)a0 needDegrade:(BOOL)a1;
- (void)viewDidAppearForFetchRecommendWordWithAwemeModel:(id)a0 needDegrade:(BOOL)a1;
- (void)onScrollDidEndForRemoveSearchBarBubble;
- (void)onScrollDidEndForSearchBarRefreshWithRecommendWord:(id)a0;
- (void)onScrollDidEndForFetchRecommendWordWithAwemeModel:(id)a0 needDegrade:(BOOL)a1;
- (void)onScrollDidEndForFetchNextRecommendWordWithAwemeModel:(id)a0 needDegrade:(BOOL)a1;
- (void)onScrollDidEndWithAwemeModel:(id)a0;
- (void)initialDataSourceFetchDidFinishedForFetchRecommendWordWithAwemeModel:(id)a0 needDegrade:(BOOL)a1;
- (double)returnViewWidth;
- (void)handleSearchBottomAnchorAppearDeterminated:(id)a0;
- (void)rightScanEntranceButtonClicked:(unsigned long long)a0;
- (void)searchBarRefreshWithRecommendWord:(id)a0;
- (void)jumpCamera;
- (void)jumpVisionSearch:(unsigned long long)a0;
- (id)fetchCurrentImage;
- (long long)fetchCurrentPlayTime;
- (void)showBubbleWithRecommendModel:(id)a0;
- (void)fetchRecommendWordWithAwemeModel:(id)a0 needDegrade:(BOOL)a1;
- (void)updateRecommendWordMananger;
- (void)removeSearchBarBubble;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)viewDidDisappear;

@end
