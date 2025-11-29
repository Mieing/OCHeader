@class UIStackView, NSArray, NSString, DUXButton, DUXSelectionPanelTableViewHeader, NSMutableArray, UITableView;
@protocol DUXMultipeSelectionPanelDelegate;

@interface DUXMultipeSelectionPanel : UIView <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *orignSelectedArray;
@property (copy, nonatomic) NSString *orignConfirmTitle;
@property (retain, nonatomic) UIStackView *buttonStackView;
@property (retain, nonatomic) DUXButton *confirmButton;
@property (retain, nonatomic) DUXButton *secondaryButton;
@property (retain, nonatomic) DUXSelectionPanelTableViewHeader *tableViewHeader;
@property (nonatomic) double maxIntrinsicContentHeight;
@property (nonatomic) double maxScale;
@property (nonatomic) long long rowCount;
@property (retain, nonatomic) NSMutableArray *selectedIndex;
@property (weak, nonatomic) id<DUXMultipeSelectionPanelDelegate> delegate;
@property (nonatomic) BOOL showSelectedCount;
@property (nonatomic) BOOL showUnselectedCount;
@property (nonatomic) BOOL enableUnselectedConfirm;
@property (nonatomic) unsigned long long enlargeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateFrameIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enlargeType:(unsigned long long)a1;
- (id)initWithRowCount:(long long)a0 selectedIndex:(id)a1 delegate:(id)a2;
- (void)updateIntrinsicContentHeight:(double)a0;
- (void)showSecondaryButton:(BOOL)a0;
- (void)showConfirmButton:(BOOL)a0;
- (double)buttonStackViewHeight;
- (id)initWithRowCount:(long long)a0 selectedIndex:(id)a1 delegate:(id)a2 enlargeType:(unsigned long long)a3;
- (void)updateConfirmStatus;
- (void)confirmButtonAction;
- (void)selectAllOptions:(BOOL)a0 saved:(BOOL)a1;
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
- (void)secondaryButtonAction;
- (void)recoveryOptions;

@end
