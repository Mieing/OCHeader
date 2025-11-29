@class NSString, UITableView;
@protocol AWEMRSubscribeManageSelectionPanelDelegate;

@interface AWEMRSubscribeManageSelectionPanelView : UIView <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic) long long rowCount;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<AWEMRSubscribeManageSelectionPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRowCount:(long long)a0 selectedIndex:(long long)a1 delegate:(id)a2;
- (double)rowHeightAtIndex:(long long)a0;
- (id)cellConfigAtIndex:(long long)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;

@end
