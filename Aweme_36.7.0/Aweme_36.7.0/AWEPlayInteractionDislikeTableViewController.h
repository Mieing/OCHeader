@class NSArray, NSDictionary, AWEAwemeModel, NSString, UITableView;
@protocol AWEPlayInteractionDislikeTableViewControllerDelegate;

@interface AWEPlayInteractionDislikeTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) id<AWEPlayInteractionDislikeTableViewControllerDelegate> selectDelegate;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSArray *dataArray;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSDictionary *trackExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dux_titleForColoseButton;
- (id)getDislikeInfoWithIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;

@end
