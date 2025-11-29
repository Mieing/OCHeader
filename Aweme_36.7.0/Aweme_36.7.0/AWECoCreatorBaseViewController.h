@class NSString, UIViewController, UITableView;

@interface AWECoCreatorBaseViewController : UIViewController

@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *fromPage;
@property (weak, nonatomic) UIViewController *containerVC;

- (void).cxx_destruct;
- (void)dismissSheet;

@end
