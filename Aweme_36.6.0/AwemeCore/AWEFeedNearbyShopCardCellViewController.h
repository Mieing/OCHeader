@class AWEFeedNearbyShopCardViewController;

@interface AWEFeedNearbyShopCardCellViewController : AWEFeedCellViewController

@property (retain, nonatomic) AWEFeedNearbyShopCardViewController *cardViewController;

- (void)didDisplay;
- (BOOL)shouldRespondSingleClick;
- (BOOL)shouldRespondDoubleClick;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)configureWithModel:(id)a0;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
