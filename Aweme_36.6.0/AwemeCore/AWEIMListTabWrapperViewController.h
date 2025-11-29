@class NSString, UIViewController;
@protocol AWEIMListTabWrapperAction;

@interface AWEIMListTabWrapperViewController : UIViewController <AWEIMTabSkeletonChildViewControllerProtocol>

@property (nonatomic) long long type;
@property (weak, nonatomic) id<AWEIMListTabWrapperAction> listAction;
@property (retain, nonatomic) UIViewController *listChildViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)skeletonScrollView;
- (void)loadChildViewController;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithType:(long long)a0 context:(id)a1;

@end
