@class WCFinderMsgChatInfoReporter, NSString, CBaseContact, MMTableViewInfo;
@protocol WCFinderMsgChatInfoViewControllerDelegate;

@interface WCFinderMsgChatInfoViewController : MMUIViewController <WCFinderMsgSessionMgrExt, WCFinderFansProfileViewControllerDelegate>

@property (retain, nonatomic) MMTableViewInfo *tableViewMgr;
@property (retain, nonatomic) WCFinderMsgChatInfoReporter *reporter;
@property (weak, nonatomic) id<WCFinderMsgChatInfoViewControllerDelegate> delegate;
@property (retain, nonatomic) CBaseContact *myRoleContact;
@property (retain, nonatomic) CBaseContact *sessionContact;
@property (retain, nonatomic) CBaseContact *realChatContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)setReportChatSessionId:(id)a0;
- (void)fetchLatestMsgSessionState;
- (void)initView;
- (void)clickLinkAction;
- (void)reloadTableViewData;
- (void)makeContactInfo:(id)a0 CellInfo:(id)a1;
- (void)openContactInfo;
- (void)onBlockSwitchChange:(id)a0;
- (void)onClearAllMessage:(id)a0;
- (void)deleteMsgAction;
- (void)onExpose:(id)a0;
- (BOOL)isContactBlocked;
- (void)onFinderMsgSessionStatusUpdatedWithSessionId:(id)a0;
- (void)fansProfileViewController:(id)a0 clickFinderActionWithWXUsername:(id)a1;
- (void)fansProfileViewController:(id)a0 clickActionWithContact:(id)a1 finderContact:(id)a2 type:(unsigned long long)a3;
- (void)showAddBlackListViewWithContact:(id)a0;
- (void)addToBlackList:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
