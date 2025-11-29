@class InteractDressInfoResponse_DressInfo, NSArray, UIImageView, NSString, UITableView;

@interface IESLiveVSMessageBoardDressUpPanelView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) InteractDressInfoResponse_DressInfo *dressUpModel;
@property (nonatomic) int lastThemeSkinRow;
@property (nonatomic) int lastExclusiveMedalRow;
@property (copy, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIImageView *userImageView;
@property (copy, nonatomic) NSString *userTitle;
@property (copy, nonatomic) id /* block */ ExclusiveMedalBlock;
@property (copy, nonatomic) id /* block */ ThemeSkinBlock;
@property (copy, nonatomic) id /* block */ ExclusiveMedalCellShow;
@property (copy, nonatomic) id /* block */ ThemeSkinCellShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDressInfo:(id)a0;
- (void)updateSelectItem:(int)a0 and:(int)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)setup;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
