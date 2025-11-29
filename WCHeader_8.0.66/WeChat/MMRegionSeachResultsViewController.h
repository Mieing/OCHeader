@class NSArray, NSMutableArray, UISearchController;
@protocol MMRegionSeachResultsViewControllerDelegate;

@interface MMRegionSeachResultsViewController : WCPayBaseViewController

@property (retain, nonatomic) NSMutableArray *countries;
@property (retain, nonatomic) NSMutableArray *provinces;
@property (retain, nonatomic) NSMutableArray *cities;
@property (nonatomic) double searchBackgroundY;
@property (nonatomic) double searchBackgroundHeight;
@property (retain, nonatomic) NSArray *results;
@property (weak, nonatomic) id<MMRegionSeachResultsViewControllerDelegate> delegate;
@property (weak, nonatomic) UISearchController *searchController;

- (void)viewDidLoad;
- (void)setupData;
- (void)reloadData;
- (void)clickInfoCell:(id)a0;
- (void)fixSearchBarBackgroundWhenActive;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;

@end
