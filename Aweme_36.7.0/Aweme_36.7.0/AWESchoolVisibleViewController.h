@class NSArray, UITableViewCell, NSString, UITableView;
@protocol AWESettingsTableViewCellProtocol;

@interface AWESchoolVisibleViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *visibleArray;
@property (retain, nonatomic) UITableViewCell<AWESettingsTableViewCellProtocol> *visibleAllCell;
@property (retain, nonatomic) UITableViewCell<AWESettingsTableViewCellProtocol> *visibleAlumniCell;
@property (retain, nonatomic) UITableViewCell<AWESettingsTableViewCellProtocol> *visibleSelfCell;
@property (nonatomic) unsigned long long visibleType;
@property (copy, nonatomic) id /* block */ changeVisibleTypeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStatusBarBackgroundColor:(id)a0;
- (BOOL)isSelectedWithType:(unsigned long long)a0;
- (id)titleWithVisibleType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)back;

@end
