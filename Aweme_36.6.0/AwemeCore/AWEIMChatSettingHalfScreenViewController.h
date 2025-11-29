@class NSNumber, NSArray, NSString, UIView, DUXSheet, UITableView;

@interface AWEIMChatSettingHalfScreenViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIView *sheetHeader;
@property (retain, nonatomic) UITableView *sheet;
@property (retain, nonatomic) NSArray *sectionedItems;
@property (nonatomic) BOOL useCardUIStyle;
@property (nonatomic) long long sectionFooterHeight;
@property (weak, nonatomic) DUXSheet *containerSheet;
@property (copy, nonatomic) id /* block */ reloadBlock;
@property (retain, nonatomic) NSNumber *selectValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showPanelWithItems:(id)a0 onViewController:(id)a1 useCardUIStyle:(BOOL)a2 sheetHeader:(id)a3 sheetHeaderHeight:(double)a4 sectionFooterHeight:(long long)a5 reloadBlock:(id /* block */)a6;
+ (id)showPanelWithSectionedItems:(id)a0 onViewController:(id)a1 useCardUIStyle:(BOOL)a2 sheetHeader:(id)a3 sheetHeaderHeight:(double)a4 sectionFooterHeight:(long long)a5 reloadBlock:(id /* block */)a6;

- (void)configViews;
- (void)reloadDataWithNewItems:(id)a0;
- (void)reloadDataWithNewSections:(id)a0;
- (id)initWithSectionedItems:(id)a0 useCardUIStyle:(BOOL)a1 sheetHeader:(id)a2 sectionFooterHeight:(long long)a3 reloadBlock:(id /* block */)a4;
- (id)initWithItems:(id)a0 useCardUIStyle:(BOOL)a1 sheetHeader:(id)a2 sectionFooterHeight:(long long)a3 reloadBlock:(id /* block */)a4;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)dismissWithCompletion:(id /* block */)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (id)cellReuseIdentifier;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (double)tableViewHeight;

@end
