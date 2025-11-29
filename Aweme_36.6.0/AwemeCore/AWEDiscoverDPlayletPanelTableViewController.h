@class NSNumber, AWEPlayletSchemaModel, AWEDiscoverDPlayletPanelViewController, NSString, NSDictionary, AWEUILoadingView, NSMutableSet, UITableView, AWEPlayletInfoModel, AWEDiscoverDPlayletPositiveDataController, NSIndexPath;
@protocol AWEDiscoverDPlayletPanelDelegate;

@interface AWEDiscoverDPlayletPanelTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEDiscoverDPlayletNetworkServiceDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) AWEDiscoverDPlayletPositiveDataController *dataController;
@property (retain, nonatomic) AWEPlayletSchemaModel *schemaModel;
@property (nonatomic) double originalScrollViewOffset;
@property (retain, nonatomic) NSDictionary *schemaLogExtras;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) float segmentViewHeight;
@property (retain, nonatomic) NSMutableSet *displayedIndexPaths;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEPlayletInfoModel *currentShowPlayletInfoModel;
@property (weak, nonatomic) id<AWEDiscoverDPlayletPanelDelegate> delegate;
@property (retain, nonatomic) NSIndexPath *selectIndexPath;
@property (copy, nonatomic) NSNumber *selectEpisode;
@property (weak, nonatomic) AWEDiscoverDPlayletPanelViewController *superViewController;
@property (readonly, nonatomic) long long shownEpisodeCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureUI;
- (void)updatePlayletID:(id)a0 lastEpisode:(id)a1;
- (void)insertAdFinishedInsertSelectPanel;
- (BOOL)isScrolledEndInCurrentPlaylet;
- (void)unselectOfCurrentPlay;
- (BOOL)shouldShowCell:(id)a0;
- (void)loadPreviousIfNeed;
- (void)scrollToEpisode:(id)a0 withPlayletID:(id)a1;
- (void)scrollToEpisode:(id)a0 withPlayletID:(id)a1 failed:(id /* block */)a2;
- (id)initWithSchemaModel:(id)a0 delegate:(id)a1;
- (void)setLoadingBackgroundColor:(id)a0;
- (void)updatePanelUI;
- (void)playletDataChanged:(BOOL)a0 awemeModels:(id)a1;
- (void)resetShownCount;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)startLoading;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)stopLoading;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
