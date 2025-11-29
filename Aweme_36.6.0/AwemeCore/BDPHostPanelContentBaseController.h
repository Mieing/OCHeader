@class UIViewController;
@protocol BDPHostPanelControllerProtocol;

@interface BDPHostPanelContentBaseController : UIViewController <BDPHostPanelContentControllerProtocol>

@property (nonatomic) BOOL isHasDone_firstShowCompletion;
@property (weak, nonatomic) UIViewController<BDPHostPanelControllerProtocol> *hostPanelController;
@property (copy, nonatomic) id /* block */ firstShowCompletion;

- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;

@end
