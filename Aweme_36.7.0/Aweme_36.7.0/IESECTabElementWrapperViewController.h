@protocol IESECTabViewElementProtocol;

@interface IESECTabElementWrapperViewController : UIViewController

@property (copy, nonatomic) id /* block */ appearanceTransitionBlock;
@property (retain, nonatomic) id<IESECTabViewElementProtocol> mObject;

- (void)tabIndexWillMoveToMe;
- (void)tabIndexCancelMoveToMe;
- (void)tabIndexDidMoveToMe;
- (id)initWithWrapperObject:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
