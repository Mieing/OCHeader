@class UIStackView, NSString, IESLiveMessageListBaseCell, UIView, IESLivePSActionSheetPanelViewModel, UITableView;

@interface IESLivePSActionSheetPanelView : UIView <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) IESLivePSActionSheetPanelViewModel *viewModel;
@property (nonatomic) struct CGSize { double width; double height; } panelSize;
@property (nonatomic) double actionSheetHeight;
@property (nonatomic) double topAreaHeight;
@property (nonatomic) double tableViewAreaHeight;
@property (retain, nonatomic) IESLiveMessageListBaseCell *messageCell;
@property (retain, nonatomic) UIView *actionSheetContainerView;
@property (retain, nonatomic) UIStackView *topAreaView;
@property (retain, nonatomic) UITableView *middleAndBottomAreaView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)calculatePanelViewLayoutData;
- (void)renderPanelView;
- (void)setupMessageCell;
- (void)setupActionSheetView;
- (id)initWithPanelViewModel:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupUI;

@end
