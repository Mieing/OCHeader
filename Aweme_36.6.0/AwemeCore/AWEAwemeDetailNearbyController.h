@interface AWEAwemeDetailNearbyController : AWEAwemeNewDetailBaseController

@property (nonatomic) BOOL hasAlreadyShowPOIAnchor;

- (void)cellViewControllerDidRenderFirstFrame:(id)a0;
- (void)loadMoreCompletionWithData:(id)a0;
- (void)showAnchor;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
