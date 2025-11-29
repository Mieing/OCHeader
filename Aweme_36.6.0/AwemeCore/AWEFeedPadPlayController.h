@class NSIndexPath;

@interface AWEFeedPadPlayController : AWEBaseController

@property (retain, nonatomic) NSIndexPath *willDisplayIndexPath;
@property (retain, nonatomic) NSIndexPath *didEndDisplayingIndexPath;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isRefreshing;
@property (nonatomic) BOOL enableFeedSplit;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
