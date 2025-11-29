@class UITableView, NSString, UIViewController, AWEECOMIMChatFoldNavigationBar, AWEECOMIMPageTrackUtil, AWEECOMIMChatFoldVCBiz;
@protocol AWEECOMIMChatFoldViewControllerDelegate;

@interface AWEECOMIMChatFoldViewController : AWEECOMIMBaseViewController <UITableViewDataSource, UITableViewDelegate, AWEECOMIMMsgCellDelegate, AWEECOMIMFloatContainerDetailViewControllerProtocol>

@property (retain, nonatomic) AWEECOMIMChatFoldVCBiz *biz;
@property (retain, nonatomic) AWEECOMIMChatFoldNavigationBar *foldNavigationBar;
@property (retain, nonatomic) UITableView *messageListTableView;
@property (retain, nonatomic) AWEECOMIMPageTrackUtil *pageTrackUtil;
@property (nonatomic) long long numberOfCellModelArr;
@property (weak, nonatomic) id<AWEECOMIMChatFoldViewControllerDelegate> delegate;
@property (readonly, nonatomic) NSString *foldGroupKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *containerVC;
@property (copy, nonatomic) id /* block */ ecomim_closeDetailFloatBlock;

- (BOOL)btm_autoManaged;
- (void)trackPageView;
- (void)msgCellDidChangeHeight:(id)a0 tableCell:(id)a1;
- (void)msgCellDidResendMessage:(id)a0 lastSendMsgModel:(id)a1;
- (void)msgCellDidClickAvatar:(id)a0;
- (void)registerMsgCells;
- (void)scrollToBottomAnimated:(BOOL)a0 shouldDelay:(BOOL)a1 completion:(id /* block */)a2;
- (id)getDefaultCell:(id)a0 atIndexPath:(id)a1;
- (void)msgCellDidClickReEdit:(id)a0;
- (void)msgCellDidUpdate:(id)a0;
- (void)msgCellDidModifyUserConfig:(id)a0 bizType:(int)a1 openStatus:(int)a2;
- (void)setupPageTrackUtil;
- (id)pageCommonParams;
- (void)msgCellDidSkipToReport:(id)a0 fromSource:(id)a1;
- (void)msgCellDidClickImage:(id)a0 imageItemModel:(id)a1 clickChainTask:(id)a2;
- (void)msgCellDidSendQuestionAnswer:(id)a0 cellModel:(id)a1;
- (void)msgCellDidSendSelectableMsgCardMessage:(id)a0 cellModel:(id)a1;
- (void)msgCellDidUpdateHeight:(id)a0 tableCell:(id)a1;
- (void)msgCellDidClickFoldButton:(id)a0;
- (id)foldGroupKey;
- (void)msgCellDidShowRiskHandleFooter:(id)a0;
- (void)msgCellDidUserSwitchToHuman:(id)a0 reqId:(id)a1;
- (id)msgCellEncodeShopId;
- (id)initWithEntryModel:(id)a0;
- (void)updateWithOriginMessageArr:(id)a0;
- (void)msgExposureCallback:(id)a0;
- (BOOL)p_enablePerformBatchUpdates;
- (void)msgCellDidSendSelectableMessage:(id)a0 cellModel:(id)a1;
- (void)msgCellTouchInside:(id)a0;
- (void)msgCellDidClickVideo:(id)a0 clickChainTask:(id)a1;
- (void)msgCellDidRatingCardChangeTextViewFirstResponder:(BOOL)a0 msgModel:(id)a1;
- (void)msgCellUpdateTrackerInfo:(id)a0 withKey:(id)a1 updateBlock:(id /* block */)a2;
- (void)msgCellDidAdjustPosition:(double)a0;
- (void)setupFoldNavigationBar;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;
- (void)loadMoreMessages;

@end
