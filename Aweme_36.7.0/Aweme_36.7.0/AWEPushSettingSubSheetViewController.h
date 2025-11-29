@class NSString, UIView, NSMutableArray, UITableView;
@protocol AWEPushSettingSubSheetViewControllerDelegate;

@interface AWEPushSettingSubSheetViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableArray *itemArray;
@property (retain, nonatomic) UIView *sectionHeaderView;
@property (copy, nonatomic) NSString *sheetTitle;
@property (copy, nonatomic) NSString *sheetOption1Title;
@property (copy, nonatomic) NSString *sheetOption2Title;
@property (weak, nonatomic) id<AWEPushSettingSubSheetViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_loadSettingText;
- (void)p_createDataSource;
- (void)p_createSectionHeader;
- (void)p_dissmissPanel;
- (void)p_cancleBtnClicked;
- (void)p_setupUI;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
