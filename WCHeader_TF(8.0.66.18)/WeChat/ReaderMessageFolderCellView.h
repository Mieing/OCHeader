@class ReaderMessageFolderViewModel, NSString, MMUIButton, NSMutableArray;

@interface ReaderMessageFolderCellView : BaseMessageCellView <ReaderMessageFolderCellViewDelegate>

@property (retain, nonatomic) ReaderMessageFolderViewModel *viewModel;
@property (retain, nonatomic) MMUIButton *hotSpotButton;
@property (retain, nonatomic) NSMutableArray *cellViewList;
@property (retain, nonatomic) NSMutableArray *expandedPositionYList;
@property (retain, nonatomic) NSMutableArray *collapsedPositionYList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setViewModel:(id)a0;
- (void)onAppear;
- (void)setupContentView;
- (void)setDelegate:(id)a0;
- (void)layoutContentView;
- (void)modifyStatusExpanding2ExpandedAndReplaceMessageNode;
- (BOOL)canBeReused;
- (void)expandFolder;
- (void)setNoClip;
- (void)updateContentViewFrameBeforeExpand;
- (void)updateCellViewBackgroundColorBeforeExpand;
- (void)updateCellViewBackgroundColorAfterCollapse;
- (double)calcuateExpandedPositionYWithIndex:(unsigned long long)a0;
- (double)calcuateCollapsedPositionYWithIndex:(unsigned long long)a0;
- (void)handleExpandButtonClicked;
- (void)handleHotSpotButtonClicked;
- (BOOL)canCellShowOperationMenu;
- (void)onFolderCellView:(id)a0 actionType:(unsigned long long)a1 jumpType:(unsigned long long)a2;
- (void)kvReportWithReportType:(unsigned long long)a0;
- (void)kvReportWithReportType:(unsigned long long)a0 jumpType:(unsigned long long)a1;
- (BOOL)isItemInCellViewList:(id)a0;
- (void).cxx_destruct;

@end
