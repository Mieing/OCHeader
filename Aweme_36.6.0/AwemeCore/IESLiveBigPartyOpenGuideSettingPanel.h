@class UILabel, NSString, UITableView;
@protocol IESLiveBigPartyOpenGuideSettingPanelDelegate, IESLiveBigPartyOpenGuideSettingPanelDataSource;

@interface IESLiveBigPartyOpenGuideSettingPanel : UIView <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) UITableView *settingListView;
@property (weak, nonatomic) id<IESLiveBigPartyOpenGuideSettingPanelDataSource> dataSource;
@property (weak, nonatomic) id<IESLiveBigPartyOpenGuideSettingPanelDelegate> delegate;
@property (copy, nonatomic) NSString *openSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataSource:(id)a1 delegate:(id)a2;
- (void)reLoadData;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupUI;

@end
