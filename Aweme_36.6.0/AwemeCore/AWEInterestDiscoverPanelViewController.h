@class UIView, NSString, AWEListDataController, UIImageView, AWEUILoadingView, UITableView, AWEInterestDiscoverContext, UILabel;
@protocol AWEInterestDiscoverPanelViewControllerDelegate;

@interface AWEInterestDiscoverPanelViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UIImageView *roamImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIView *closeBackgroundView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView *loadingBackgroundView;
@property (weak, nonatomic) AWEListDataController *dataController;
@property (weak, nonatomic) id<AWEInterestDiscoverPanelViewControllerDelegate> delegate;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEInterestDiscoverContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closePanel;
- (id)commonParams;
- (void)addLoadMoreIfNeeded;
- (void)addHandler;
- (void)scrollToVisibleIndex;
- (void)trackMoreInterestShow;
- (void)hideLoadingIfNeeds;
- (void)showLoadingIfNeeds;
- (void)dealSelectVideoWithTableView:(id)a0 indexPath:(id)a1;
- (id)videoAtIndex:(long long)a0;
- (void)trackMoreInterestClick:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (id)titleString;
- (void)setupUI;
- (long long)numberOfVideos;
- (void)willDisplayCell:(id)a0 forRowAtIndexPath:(id)a1;

@end
