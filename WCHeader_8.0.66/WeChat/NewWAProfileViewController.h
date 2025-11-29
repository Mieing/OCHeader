@class NSString, WAProfileFooterView, NSDictionary, NSMutableArray, WAContact, ForwardMessageLogicController, WAProfileHeaderView, WAProfileLogicController;
@protocol WAProfileViewControllerDelegate;

@interface NewWAProfileViewController : ZZFLEXTableViewController <WAProfileHeaderViewDelegate, ForwardMessageLogicDelegate, WAUINavigationControllerDelegate> {
    ForwardMessageLogicController *_forwardLogic;
    WAProfileHeaderView *_headerView;
    NSMutableArray *_sectionHeaderList;
    WAProfileFooterView *_footerView;
}

@property (retain, nonatomic) WAProfileLogicController *logicController;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) WAContact *contact;
@property (nonatomic) BOOL isEnterStatReported;
@property (nonatomic) unsigned long long enterScene;
@property (copy, nonatomic) NSString *sceneNote;
@property (nonatomic) unsigned long long exposeFrom;
@property (copy, nonatomic) NSString *pagePath;
@property (nonatomic) unsigned long long fromDebugMode;
@property (nonatomic) unsigned int fromAppVersion;
@property (retain, nonatomic) NSDictionary *exposeExtraInfo;
@property (nonatomic) unsigned long long preScene;
@property (copy, nonatomic) NSString *preSceneNote;
@property (weak, nonatomic) id<WAProfileViewControllerDelegate> delegate;
@property (nonatomic) BOOL needShowBottomFeedBack;
@property (copy, nonatomic) NSString *hostAppid;
@property (copy, nonatomic) NSString *snapshotLocalId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUsername:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)viewDidTransitionToNewSize;
- (void)reloadData;
- (void)initTableView;
- (void)initHeaderViewIfNeed:(id)a0;
- (void)reloadFooterView:(id)a0;
- (void)updateHeaderViewWithEvaluateInfo;
- (void)initCustomNavItems;
- (void)onSelectFeedBackButtonWithReportAction:(unsigned long long)a0;
- (void)onSelectRelatedBrandCell;
- (void)onSelectRelatedWeAppCell;
- (void)openBrandContact:(id)a0;
- (void)onSelectedMoreInfoCell;
- (void)showEasyBuyPageSheet;
- (void)onBackButtonClicked;
- (void)onClickNavRightButton;
- (id)getItemData;
- (void)showTipsViewController:(id)a0;
- (void)originalJump:(unsigned long long)a0 JumpURL:(id)a1;
- (void)onTagViewClicked:(id)a0 tagType:(long long)a1;
- (void)onTeenagerProtectLinkClicked:(unsigned long long)a0;
- (void)onEnterButtonClicked:(id)a0;
- (void)onServiceButtonClicked:(id)a0;
- (void)onShareButtonClicked:(id)a0;
- (void)onStarButtonClick;
- (void)onUnStarButtonClick;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageException:(id)a0;
- (void)enterProfileStatReport:(unsigned int)a0;
- (void)leaveProfileStatReport;
- (void)shareStatReport:(id)a0 Result:(unsigned long long)a1;
- (void)profileCommonReport:(unsigned long long)a0 Result:(unsigned long long)a1 configAction:(id /* block */)a2;
- (void)profileCommonReport:(unsigned long long)a0 Result:(unsigned long long)a1;
- (void)profileCommonReport:(unsigned long long)a0;
- (BOOL)navigationController:(id)a0 shouldUsePresentWhenPushViewController:(id)a1 animated:(BOOL)a2 scene:(unsigned long long)a3;
- (void).cxx_destruct;

@end
