@class AWELongPressPanelTableViewController, NSString, AWELongPressPanelConfiguration, AWEAwemeModel, NSMutableArray;

@interface AWEVideoLongPressPanelViewController : UIViewController <AWELongPressPanelViewControllerProtocol>

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

+ (id)LongPressPanelViewControllerWithModel:(id)a0 configuration:(id)a1;

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (id)dux_sheetShouldRecognizeAsynchronousScrollViewArray;
- (void)addDismissedHandler:(id /* block */)a0;
- (void)addWillDismissHandler:(id /* block */)a0;
- (double)getLongPressPanelMaxHeight;
- (void)upDatePanelViewHeigth;
- (double)getLongPressPanelMinimumHeight;
- (void)updateSheetHeightWithHeight:(double)a0 withMinimumHeight:(double)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setUpUI;

@end
