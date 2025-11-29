@class AWEShellControllerManager, NSString, AWEPageContext;

@interface AWEShellViewController : UIViewController <AWEShellViewControllerProtocol>

@property (retain, nonatomic) AWEPageContext *context;
@property (retain, nonatomic) AWEShellControllerManager *controllerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createControllerManager;
- (void)loadControllerManager;
- (void)setupInit;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)createContext;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
