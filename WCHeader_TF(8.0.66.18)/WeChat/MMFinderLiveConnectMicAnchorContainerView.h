@class UITableViewDiffableDataSource, NSArray, MMFinderLiveConnectMicRandomHintTableFooterView, NSString, NSMutableDictionary, NSMutableArray, UILabel, MMTableView;

@interface MMFinderLiveConnectMicAnchorContainerView : MMFinderLiveConnectMicBaseAnchorContainerView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveConnectedMicUserCellViewDelegate>

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) MMFinderLiveConnectMicRandomHintTableFooterView *footerView;
@property (retain, nonatomic) UITableViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) NSArray *connectMicUserList;
@property (retain, nonatomic) NSArray *connectingAnchorUserList;
@property (retain, nonatomic) NSArray *originCandicateAnchorList;
@property (retain, nonatomic) NSMutableArray *candicateAnchorList;
@property (nonatomic) BOOL forceDisableApplySectionCellButton;
@property (nonatomic) BOOL footerViewHasBeenExposed;
@property (retain, nonatomic) NSMutableDictionary *candicateReportDic;
@property (nonatomic) BOOL isLastContainerHide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithConnectMicUserList:(id)a0 connectingAnchorUserList:(id)a1 forceDisableApplySectionCellButton:(BOOL)a2 animted:(BOOL)a3;
- (void)layoutContentView;
- (void)layoutTableView;
- (void)checkFooterViewExposedAndReport;
- (void)setupDataSourceIfNeeded;
- (void)applyDiffSnapshot:(BOOL)a0;
- (id)makeInviteAnchorButtonWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeRandomMatchButtonWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showTipsLabelWithTips:(id)a0 topAreaHeight:(double)a1;
- (void)resetCandicateAnchorList;
- (void)tryFetchCandicateAnchorList;
- (BOOL)handleFilterCandicateAnchorList;
- (void)updateApplySection;
- (void)updateCandicateSection;
- (void)updateConnectingAnchorSection;
- (id)mainScrollView;
- (id)displaySections;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)onContainerDidShow;
- (void)onContainerWillHide;
- (void)onContainerWillDisappear;
- (void)onClickInviteAnchorButton:(id)a0;
- (void)onClickRandomMatchButton:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onMMFinderLiveConnectedMicUserCellViewConnectMicToUser:(id)a0;
- (void)updateDicWithIndexPath:(id)a0;
- (void)onReporterBegin;
- (void)onReporterEnd;
- (void)reportWithType:(unsigned long long)a0 reportParams:(id)a1;
- (void).cxx_destruct;

@end
