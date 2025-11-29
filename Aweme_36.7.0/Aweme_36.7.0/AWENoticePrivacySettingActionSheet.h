@class NSArray, NSString, UIView, NSNumber, UITableView;

@interface AWENoticePrivacySettingActionSheet : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) NSNumber *selectIndex;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sheetWithModels:(id)a0 headerText:(id)a1;
+ (id)sheetWithModels:(id)a0 headerText:(id)a1 headerTitleText:(id)a2;

- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)cancel;

@end
