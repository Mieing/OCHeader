@class AWEHotSpotInnerContext, NSString, AWEIPHotSpotManager, NSIndexPath, UITableView;

@interface AWEIPHotSpotPanelTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEHotPointPanelControllerProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIPHotSpotManager *manager;
@property (copy, nonatomic) NSString *currentWord;
@property (nonatomic) BOOL disablePanelAnchor;
@property (retain, nonatomic) AWEHotSpotInnerContext *context;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long index;

- (id)tabManager;
- (void)configureUI;
- (id)recommendManager;
- (void)resetTrackedState;
- (void)refreshWithData:(id)a0 risingHotSpotList:(id)a1 paramsModel:(id)a2 otherParams:(id)a3;
- (void)scrollToNewHotSpotModel:(id)a0 isScrolled:(BOOL)a1;
- (void)showRecommendView;
- (void)hideRecommendView;
- (void)selectSameHotSpotModel:(id)a0;
- (id)allHotSpots;
- (void)configCell:(id)a0 model:(id)a1 indexPath:(id)a2;
- (id)indexPathForHotWord:(id)a0;
- (id)hotSpotModelAtIndexPath:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)endRefreshing;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)scrollView;
- (void)viewDidLoad;

@end
