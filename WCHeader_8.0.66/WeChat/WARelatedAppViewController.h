@class NSString, NSMutableArray;

@interface WARelatedAppViewController : ZZFLEXTableViewController

@property (retain, nonatomic) NSString *teamName;
@property (retain, nonatomic) NSMutableArray *relateWeappList;

- (id)initWithTeamName:(id)a0 relatedAppList:(id)a1;
- (void)loadView;
- (void)viewDidLoad;
- (void)onBackButtonClicked:(id)a0;
- (void)dealloc;
- (void)reloadListUI;
- (void).cxx_destruct;

@end
