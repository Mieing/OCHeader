@class UIViewController;
@protocol AWEFeedNearbyCardViewControllerProtocol;

@interface AWEFeedNearbyCardCellViewController : AWEFeedCellViewController

@property (retain, nonatomic) UIViewController<AWEFeedNearbyCardViewControllerProtocol> *nearbyCardViewController;

- (void)didDisplay;
- (BOOL)shouldRespondSingleClick;
- (BOOL)shouldRespondDoubleClick;
- (void)__setupUIIfNeeds;
- (void).cxx_destruct;
- (void)play;
- (void)configureWithModel:(id)a0;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
