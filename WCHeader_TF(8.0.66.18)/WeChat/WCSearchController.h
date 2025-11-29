@class MMUISearchBar;
@protocol WCSearchControllDelegate;

@interface WCSearchController : UISearchController

@property (retain, nonatomic) MMUISearchBar *wcSearchBar;
@property (weak, nonatomic) id<WCSearchControllDelegate> wcSearchControllDelegate;
@property (nonatomic) BOOL forceFixSearchContainerTop;

- (id)initWithSearchResultsController:(id)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)initCustomSearchBar;
- (void)viewDidLoad;
- (id)searchBar;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)accessibilityPerformEscape;
- (void).cxx_destruct;

@end
