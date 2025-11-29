@class AWEListDataController;
@protocol AWEFavoriteFileVideoDataControllerProtocol;

@interface AWEFavoriteFileVideoDetailTableViewController : AWEAwemeDetailTableViewController

@property (retain, nonatomic) AWEListDataController<AWEFavoriteFileVideoDataControllerProtocol> *favoriteFileVideoDataController;
@property (nonatomic) BOOL videoDidScroll;

+ (id)detailTableViewControllerWithDataController:(id)a0 initialIndex:(long long)a1 referString:(id)a2 enterFrom:(id)a3 context:(id)a4;

- (void)loadmore;
- (void)loadMoreForOldStyle;
- (double)getStartSeekTime:(id)a0;
- (id)createDefaultConfig;
- (void)p_setupDataControllerSyncBlock;
- (void).cxx_destruct;
- (void)play;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
