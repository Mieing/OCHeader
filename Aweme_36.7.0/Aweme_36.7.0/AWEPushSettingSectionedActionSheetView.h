@class NSArray, NSString, NSNumber, UITableView;

@interface AWEPushSettingSectionedActionSheetView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSArray *sectionedItems;
@property (retain, nonatomic) UITableView *sheet;
@property (nonatomic) BOOL useCardUIStyle;
@property (nonatomic) long long sectionHeight;
@property (retain, nonatomic) NSNumber *selectValue;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithActionSections:(id)a0 useCardUIStyle:(BOOL)a1;
- (id)initWithActionSections:(id)a0 useCardUIStyle:(BOOL)a1 withSectionHeight:(long long)a2;
- (void)reloadDataWithNewSections:(id)a0;
- (id)initWithActionSections:(id)a0;
- (void)__setupUIs;
- (id)cellReuseIdentifer;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)cancel;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithActions:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
