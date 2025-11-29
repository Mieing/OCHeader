@class NSArray, NSString, UILabel, UITableView;

@interface AWEIMPrivateMsgSettingViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *dataArray;
@property (nonatomic) long long currentSelectValue;
@property (copy, nonatomic) id /* block */ selectedItemBlock;
@property (copy, nonatomic) id /* block */ closePanelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCurrentSelectValue:(long long)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;

@end
