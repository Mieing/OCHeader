@interface CAKAlbumRecommendListViewController : CAKAlbumListViewController

@property (nonatomic) BOOL hasDataAndReload;
@property (nonatomic) long long lastCount;

- (void)handleLoadingViewIfNeeded;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;

@end
