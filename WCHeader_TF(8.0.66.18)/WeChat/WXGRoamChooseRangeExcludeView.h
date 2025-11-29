@class NSString, UITableView;

@interface WXGRoamChooseRangeExcludeView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, IRoamBackupPackageServiceExt>

@property (retain, nonatomic) UITableView *sheetView;
@property (nonatomic) long long enterScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)pageSheetWillAppear;
- (void)onComplete;
- (void)updateNav;
- (void)setupView;
- (id)getHeaderViewWithWidth:(double)a0 isTypeHeader:(BOOL)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)onRoamBackupPackageServiceChooseRangeDetailComplete;
- (void)onRoamBackupPackageServiceChooseRangeIncludeUserComplete:(BOOL)a0;
- (void).cxx_destruct;

@end
