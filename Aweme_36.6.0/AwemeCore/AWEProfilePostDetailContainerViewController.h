@class AWEProfileRecommendDetailDispatcher, UIViewController, NSString;
@protocol AWEProfilePostDetailScrollDelegate, AWEAwemeDetailTableViewControllerProtocol;

@interface AWEProfilePostDetailContainerViewController : UIViewController <AWEAwemeNewDetailBlockManagerDelegate, AWEAwemeDetailTableViewControllerDelegate, AWEProfileRecommendDetailDispatcherDelegate, AWEProfilePostDetailContainerViewControllerProtocol>

@property (retain, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *childDetailVC;
@property (weak, nonatomic) AWEProfileRecommendDetailDispatcher *dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEProfilePostDetailScrollDelegate> scrollDelegate;

- (void)addChildDetailVC;
- (BOOL)shouldActiveInCurrentTopViewControllerWithBlockManagerHelper:(id)a0;
- (id)initWithDetailTableViewController:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
