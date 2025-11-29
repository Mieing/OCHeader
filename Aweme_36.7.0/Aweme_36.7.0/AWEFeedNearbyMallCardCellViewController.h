@class UIViewController;
@protocol AWEFeedNearbyMallCardProtocol;

@interface AWEFeedNearbyMallCardCellViewController : AWEFeedCellViewController

@property (retain, nonatomic) UIViewController<AWEFeedNearbyMallCardProtocol> *cardViewController;

- (void)didDisplay;
- (BOOL)shouldRespondSingleClick;
- (BOOL)shouldRespondDoubleClick;
- (void).cxx_destruct;
- (void)configureWithModel:(id)a0;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
