@class NSArray, UISearchController;
@protocol WCPaySelectBankSearchResultViewControllerDelegate;

@interface WCPaySelectBankSearchResultViewController : WCPayBaseViewController

@property (nonatomic) double searchBackgroundY;
@property (nonatomic) double searchBackgroundHeight;
@property (weak, nonatomic) id<WCPaySelectBankSearchResultViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *results;
@property (weak, nonatomic) UISearchController *searchController;

- (void)viewDidLoad;
- (void)fixSearchBarBackgroundWhenActive;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)reloadData;
- (void)makeSearchBankCell:(id)a0 CellInfo:(id)a1;
- (void)clickInfoCell:(id)a0;
- (id)tableViewForHeader;
- (void).cxx_destruct;

@end
