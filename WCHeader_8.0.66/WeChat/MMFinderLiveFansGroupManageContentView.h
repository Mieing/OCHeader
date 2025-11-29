@class WCTimeLineFooterView, UIColor, MMFinderLiveFansGroupMemberTableHeaderView, NSString, MMFinderLiveFansGroupManageNavBar, MMFinderLiveFansGroupMemberLogic, MMFinderLiveFansGroupAnchorEditViewModel, MMFinderLiveTaskId, UIImageView, MMUILabel, MMTableView, MMFinderLiveFansGroupMemberTableViewModel;

@interface MMFinderLiveFansGroupManageContentView : UIView <MMRefreshTableFooterDelegate, MMFinderLiveFansGroupMemberTableViewDelegate>

@property (retain, nonatomic) MMFinderLiveFansGroupManageNavBar *navBar;
@property (retain, nonatomic) MMTableView *fansGroupMemberTableView;
@property (retain, nonatomic) MMFinderLiveFansGroupMemberTableViewModel *fansGroupMemberTableViewModel;
@property (retain, nonatomic) MMUILabel *noMemberTipLabel;
@property (retain, nonatomic) MMFinderLiveFansGroupMemberTableHeaderView *headerView;
@property (retain, nonatomic) WCTimeLineFooterView *footerView;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveFansGroupMemberLogic *fetchLogic;
@property (retain, nonatomic) UIColor *navBarBGColor;
@property (retain, nonatomic) NSString *fansGroupName;
@property (retain, nonatomic) MMFinderLiveFansGroupAnchorEditViewModel *anchorEditViewModel;
@property (retain, nonatomic) UIImageView *superfanTableHeaderBGImageView;
@property (copy, nonatomic) id /* block */ closeActionCallBack;
@property (copy, nonatomic) id /* block */ modifyActionCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)innerInit;
- (void)refreshFansGroupInfo;
- (unsigned long long)getFilterType;
- (unsigned long long)getSortType;
- (void)refreshAnchorEditInfo;
- (BOOL)isSelfFirstResponder;
- (void)updateUIForKeyBoardShow:(BOOL)a0 keyBoardHeight:(double)a1;
- (void)updateNavRightButton;
- (void)createFetchLogic;
- (void)refreshFansGroupName;
- (void)showNoMemberTipLabel;
- (void)hideNoMemberTipLabel;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutNavBar;
- (void)layoutFansGroupMemberTableView;
- (void)updateTableHeaderBG;
- (id)createFansGroupMemberTableFooterView;
- (void)updateFooterView:(unsigned long long)a0;
- (void)layoutNoMemberTipLabel;
- (void)createNoMemberTipLabel;
- (void)updateNoMemberTipText;
- (void)layoutTableHeaderView;
- (void)createTableHeaderView;
- (void)gotoEnableSuperfanPage;
- (BOOL)superfanEnabled;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void)onFansGroupMemberTableDidScroll;
- (void)onFansGroupMemberTableNeedRefreshWithMemberType:(unsigned long long)a0 groupType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
