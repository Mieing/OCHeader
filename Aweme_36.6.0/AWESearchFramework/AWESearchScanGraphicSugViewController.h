@class AWESearchScanGraphicSugViewControllerConfig, NSString, NSMutableArray, UITableView;

@interface AWESearchScanGraphicSugViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (copy, nonatomic) id /* block */ sugWordDidSelect;
@property (copy, nonatomic) id /* block */ sugWordWillShow;
@property (retain, nonatomic) AWESearchScanGraphicSugViewControllerConfig *config;
@property (retain, nonatomic) NSMutableArray *sugWords;
@property (retain, nonatomic) UITableView *sugTableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupSubViews;
- (void)sugTableViewShow:(BOOL)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (id)colorNamed:(id)a0;

@end
