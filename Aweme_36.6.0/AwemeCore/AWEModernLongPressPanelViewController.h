@class NSString, AWELongPressPanelConfiguration, UITableViewController, AWEAwemeModel;
@protocol AWELongPressPanelTableViewControllerProtocol;

@interface AWEModernLongPressPanelViewController : UIViewController <AWELongPressPanelViewControllerProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWELongPressPanelConfiguration *panelConfiguration;
@property (retain, nonatomic) UITableViewController<AWELongPressPanelTableViewControllerProtocol> *panelTableViewController;
@property (copy, nonatomic) id /* block */ dismissedHandler;
@property (copy, nonatomic) id /* block */ willDismissedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)LongPressPanelViewControllerWithModel:(id)a0 configuration:(id)a1;

- (void)sheet:(id)a0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withUserInteraction:(BOOL)a2;
- (void)panelDidShow;
- (double)getLongPressPanelMaxHeight;
- (void)upDatePanelViewHeigth;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
