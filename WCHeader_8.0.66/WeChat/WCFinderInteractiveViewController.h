@interface WCFinderInteractiveViewController : WCFinderNavTabViewController

@property (nonatomic) struct WCFinderInteractiveCounts { long long fav; long long like; } counts;

+ (id)createTitleWithIcon:(id)a0 count:(long long)a1;

- (id)initWithCounts:(struct WCFinderInteractiveCounts { long long x0; long long x1; })a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateRightBarButtonItems;
- (void)onLimitedClicked;
- (id)definePages;
- (void)onSearchClicked;
- (void)embedSubviewFromChildViewController:(id)a0;
- (void)unembedChildViewController:(id)a0;
- (id).cxx_construct;

@end
