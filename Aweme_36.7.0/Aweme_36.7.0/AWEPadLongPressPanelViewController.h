@class AWELongPressPanelTableViewController, NSString, AWELongPressPanelConfiguration, AWEAwemeModel, NSMutableArray;

@interface AWEPadLongPressPanelViewController : UIViewController <AWELongPressPanelViewControllerProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWELongPressPanelConfiguration *panelConfiguration;
@property (retain, nonatomic) NSMutableArray *gestureRecognizers;
@property (retain, nonatomic) AWELongPressPanelTableViewController *panelTableViewController;
@property (copy, nonatomic) id /* block */ dismissedHandler;
@property (copy, nonatomic) id /* block */ willDismissedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedDOUYINiPadModuleAdapterClass;
+ (id)LongPressPanelViewControllerWithModel:(id)a0 configuration:(id)a1;

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (id)dux_sheetShouldRecognizeAsynchronousScrollViewArray;
- (void)addDismissedHandler:(id /* block */)a0;
- (void)addWillDismissHandler:(id /* block */)a0;
- (id)aAWEFeedDOUYINiPadModuleAdapter;
- (double)getLongPressPanelMaxHeight;
- (void)updatePanelViewHeight;
- (double)getSheetTopPadding;
- (void)updateSheetHeightWithHeight:(double)a0;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)setUpUI;

@end
