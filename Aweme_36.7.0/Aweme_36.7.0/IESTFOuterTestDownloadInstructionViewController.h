@class SKStoreProductViewController, IESOuterTestInstructionAppearance, NSString, IESTFOuterTestInstructionViewModel, IESOuterTestNavigationBar, UITableView;

@interface IESTFOuterTestDownloadInstructionViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, SKStoreProductViewControllerDelegate>

@property (class, readonly, nonatomic) IESOuterTestInstructionAppearance *appearance;

@property (retain, nonatomic) IESTFOuterTestInstructionViewModel *viewModel;
@property (retain, nonatomic) IESOuterTestNavigationBar *navigationBar;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) SKStoreProductViewController *storeVC;
@property (nonatomic) BOOL originNavigationBarHidden;
@property (nonatomic) BOOL originNavigationBarIsHidden;
@property (nonatomic) long long originStatusBarStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)bindViewModel;
- (void)instructionVCShouldShowTestFlightDownloadVC;
- (void)instructionVCShouldOpenTestFlightWithURL:(id)a0;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)productViewControllerDidFinish:(id)a0;
- (id)initWithViewModel:(id)a0;
- (long long)preferredStatusBarStyle;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)appearance;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)shouldAutorotate;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)handleDismiss:(id)a0;

@end
