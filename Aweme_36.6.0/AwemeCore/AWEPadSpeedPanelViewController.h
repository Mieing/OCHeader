@class NSArray, UIVisualEffectView, NSString, UIView, UITableView;

@interface AWEPadSpeedPanelViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEPadSpeedPanelViewControllerProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (nonatomic) BOOL hasShowed;
@property (copy, nonatomic) id /* block */ buttonTargeFrameBlock;
@property (retain, nonatomic) NSArray *speedItems;
@property (nonatomic) double selectedSpeed;
@property (nonatomic) BOOL disableDismissOnLayout;
@property (copy, nonatomic) id /* block */ selectBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadTabBarAdapterClass;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)awe_shouldBypassPresentationHook;
- (id)aAWEPadTabBarAdapter;
- (void)tapMask;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)show;

@end
