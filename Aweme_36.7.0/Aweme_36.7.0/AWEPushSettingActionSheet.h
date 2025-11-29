@class NSNumber, NSArray, NSString, UIView, AWESettingSectionModel, UITableView;

@interface AWEPushSettingActionSheet : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) NSArray *dataSource;
@property (nonatomic) BOOL useCardUIStyle;
@property (retain, nonatomic) AWESettingSectionModel *sectionModel;
@property (retain, nonatomic) NSArray *sectionModelDataSource;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *selectValue;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sheetWithModels:(id)a0 useCardUIStyle:(BOOL)a1;
+ (id)sheetWithModels:(id)a0;
+ (id)sheetWithSectionModels:(id)a0 useCardUIStyle:(BOOL)a1;
+ (id)sheetWithModels:(id)a0 useCardUIStyle:(BOOL)a1 sectionModel:(id)a2;
+ (id)cellReuseIdentiferWithUseCardUIStyle:(BOOL)a0;
+ (id)headerViewIdentifierWithUseCardUIStyle:(BOOL)a0;
+ (void)generateModelAttributedTitleWithModel:(id)a0;

- (void)reloadDataWithNewItems:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)cancel;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
