@class NSString, DUXSelectionPanelTableViewHeader, UITableView;
@protocol DUXSingleSelectionPanelDelegate, IESIMSingleSelectionPanelDelegate;

@interface DUXSingleSelectionPanel : UIView <IESIMSingleSelectionPanelProtocol, UITableViewDataSource, UITableViewDelegate>

@property (weak, nonatomic) id<IESIMSingleSelectionPanelDelegate> iesimDelegate;
@property (nonatomic) long long rowCount;
@property (nonatomic) long long selectedIndex;
@property (readonly, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) DUXSelectionPanelTableViewHeader *tableViewHeader;
@property (nonatomic) double maxIntrinsicContentHeight;
@property (nonatomic) double maxScale;
@property (nonatomic) long long rowCount;
@property (nonatomic) long long selectedIndex;
@property (weak, nonatomic) id<DUXSingleSelectionPanelDelegate> delegate;
@property (nonatomic) unsigned long long enlargeType;
@property (nonatomic) BOOL forbidScrollIfSpaceEnough;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enlargeType:(unsigned long long)a1;
- (id)initWithRowCount:(long long)a0 selectedIndex:(long long)a1 delegate:(id)a2;
- (id)initWithRowCount:(long long)a0 selectedIndex:(long long)a1 iesimDelegate:(id)a2;
- (void)updateIntrinsicContentHeight:(double)a0;
- (id)initWithRowCount:(long long)a0 selectedIndex:(long long)a1 delegate:(id)a2 enlargeType:(unsigned long long)a3;
- (void)reloadData;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)rowHeight;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
