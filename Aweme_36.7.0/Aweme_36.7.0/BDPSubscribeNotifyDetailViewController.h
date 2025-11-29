@class BDPUniqueID, UIView;

@interface BDPSubscribeNotifyDetailViewController : UIViewController

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) UIView *detailView;
@property (nonatomic) unsigned long long contentType;
@property (copy, nonatomic) id /* block */ feedDetailAnimationBlock;

- (void)showViewControllerCompletion:(id /* block */)a0;
- (id)initWithUniqueId:(id)a0 contentType:(unsigned long long)a1;
- (void)backActionDidTrigger;
- (void).cxx_destruct;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end
