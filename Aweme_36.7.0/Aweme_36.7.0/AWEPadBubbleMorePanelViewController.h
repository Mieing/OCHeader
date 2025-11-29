@class UITableViewController, NSString, AWELongPressPanelConfiguration, AWEPadBubbleMorePanelContainerView, AWEAwemeModel, UIView;
@protocol AWELongPressPanelTableViewControllerProtocol;

@interface AWEPadBubbleMorePanelViewController : UIViewController <AWEPadMorePanelViewControllerProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELongPressPanelConfiguration *config;
@property (retain, nonatomic) AWEPadBubbleMorePanelContainerView *containerView;
@property (retain, nonatomic) UIView *maskView;
@property (copy, nonatomic) id /* block */ panelDidDismiss;
@property (retain, nonatomic) UITableViewController<AWELongPressPanelTableViewControllerProtocol> *panelTableViewController;
@property (copy, nonatomic) id /* block */ dismissedHandler;
@property (copy, nonatomic) id /* block */ willDismissedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)LongPressPanelViewControllerWithModel:(id)a0 configuration:(id)a1;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (BOOL)awe_shouldBypassPresentationHook;
- (double)getLongPressPanelMaxHeight;
- (void)tapMask;
- (struct CGSize { double x0; double x1; })bubbleContainerSize;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)show;
- (void)viewWillDisappear:(BOOL)a0;

@end
