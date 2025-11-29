@class UILabel, AWEGeneralSearchModel, UITableView, AWESlidingTabbarView, NSMutableArray, AWEGeneralFilmTVSourceModel, UIView, AWEFilmTVEpisodeDataController, NSString, UIButton, AWESlidingViewController, NSArray, NSNumber;

@interface AWESearchFIlmTVEpisodeSheet : UIView <UITableViewDelegate, UITableViewDataSource, AWESlidingViewControllerDelegate, AWESearchFIlmTVEpisodeSheetProtocol>

@property (nonatomic) BOOL tapBackgroundToDismiss;
@property (retain, nonatomic) AWEGeneralSearchModel *searchModel;
@property (retain, nonatomic) AWEGeneralFilmTVSourceModel *sourceModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIView *divideLine;
@property (retain, nonatomic) UIView *actionSheet;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *modelArray;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) AWEFilmTVEpisodeDataController *dataController;
@property (retain, nonatomic) AWESlidingTabbarView *tabView;
@property (retain, nonatomic) AWESlidingViewController *slidingViewController;
@property (retain, nonatomic) NSMutableArray *childControllers;
@property (retain, nonatomic) NSMutableArray *titleArray;
@property (retain, nonatomic) NSMutableArray *episodesList;
@property (nonatomic) struct CGPoint { double x; double y; } panStartPoint;
@property (nonatomic) long long selectedTabIndex;
@property (nonatomic) long long dataSourceType;
@property (retain, nonatomic) NSString *alaSrc;
@property (retain, nonatomic) NSNumber *showPeriod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ buttonClickedBlock;
@property (copy, nonatomic) id /* block */ switchTabBlock;

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1 transitionType:(long long)a2;
- (void)configModel:(id)a0 withSourceModel:(id)a1 televisionModel:(id)a2;
- (void)loadMoreDataIfNeed;
- (double)actionHeight;
- (BOOL)showSlidingView;
- (void)updateTableView;
- (BOOL)varietyStyle;
- (id)buildSeriesArray:(id)a0;
- (id)buildDisplayData:(id)a0;
- (void)updateEpisodesVC:(long long)a0;
- (void)configModelWithDict:(id)a0 mediumUIStyle:(long long)a1 dataSourceType:(id)a2;
- (void)dismiss;
- (void).cxx_destruct;
- (void)orientationChanged:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)fetchData;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)pan:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)show;

@end
