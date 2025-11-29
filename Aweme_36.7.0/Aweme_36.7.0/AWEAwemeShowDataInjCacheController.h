@class NSArray;
@protocol AWEShowDataInjCacheService;

@interface AWEAwemeShowDataInjCacheController : AWEAwemeFeedBaseController

@property (weak, nonatomic) id<AWEShowDataInjCacheService> dataInjCache;
@property (copy, nonatomic) NSArray *dataInjCacheHandlers;
@property (copy, nonatomic) NSArray *videoTimeDataInjCacheHandlers;

- (void)tableView:(id)a0 didDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)videoPlayer:(id)a0 updatePlayTime:(double)a1 totalTime:(double)a2;
- (void)registerDataInjCacheHandlers;
- (void)registerDataInjCacheConfig;
- (void)fetchDataWithModel:(id)a0 indexPath:(id)a1 timing:(unsigned long long)a2;
- (void)preloadResourceWithModel:(id)a0 timing:(unsigned long long)a1;
- (void)fetchDataWithModel:(id)a0 indexPath:(id)a1 dataInjCacheHandlers:(id)a2;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;

@end
