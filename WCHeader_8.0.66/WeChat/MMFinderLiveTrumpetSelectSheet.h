@class NSString, MMFinderLiveTaskId, WCTableViewManager, NSNumber;
@protocol MMFinderLiveTrumpetSelectSheetDelegate;

@interface MMFinderLiveTrumpetSelectSheet : MMPageSheetBaseView <MMFinderLiveTrumpetSelectCellDelegate, MMUIViewControllerExt>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (weak, nonatomic) id<MMFinderLiveTrumpetSelectSheetDelegate> delegate;
@property (retain, nonatomic) WCTableViewManager *accountsTableViewManager;
@property (nonatomic) long long currentPrivacyType;
@property (retain, nonatomic) NSNumber *selectedAccountType;
@property (retain, nonatomic) NSNumber *selectedPrivacyType;
@property (retain, nonatomic) NSNumber *isPrivateMsgVisiableInfoSwitchOn;
@property (copy, nonatomic) id /* block */ trumpetSelectDidDoneBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showWithTaskId:(id)a0 delegate:(id)a1;

- (id)initWithTaskId:(id)a0 delegate:(id)a1;
- (void)setupPageSheetConfig;
- (id)getCurrentLeftButton;
- (id)getCurrentRightButton;
- (void)onLeftButtonAction;
- (void)onDoneButtonClicked;
- (void)setupSubviews;
- (void)layoutSubviews;
- (double)fixedHeight;
- (void)layoutUI;
- (void)configureAccountsTableView;
- (long long)reloadAccountsSection;
- (void)makeTableViewSectionCornerRadius;
- (id)makeHeaderViewWith:(id)a0 topPading:(double)a1;
- (id)makeIdentityPrivacyHeaderViewWidthTopPading:(double)a0;
- (void)refresh;
- (id)joinliveVisibleInfo;
- (id)liveTask;
- (double)tableCellHeight;
- (double)privacyTableCellHeight;
- (double)tableWidth;
- (void)onClickMMFinderLiveTrumpetSelectCellContent:(id)a0;
- (void)onClickPrivateMsgVisiableInfoSwitchCell:(id)a0;
- (void)onClickIdentityPrivacyH5;
- (void)createTrumpetAccount;
- (void)pageSheetDidAppear;
- (void)pageSheetDidClose:(BOOL)a0;
- (void).cxx_destruct;

@end
