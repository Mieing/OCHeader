@interface AWEAwemeDetailDislikeController : AWEAwemeNewDetailBaseController

@property (nonatomic) BOOL isAppear;

- (void)didDislikeAweme:(id)a0;
- (long long)_findFirstOriginItemWithID:(id)a0;
- (void)onScrollToIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;

@end
