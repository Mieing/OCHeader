@class NSString, ForwardMessageLogicController, NSMutableDictionary, UIView, MMTableViewInfo, ContactSettingViewController;

@interface WXChatBotContactInfoAssist : CBaseContactInfoAssist <IHDHeadImageViewExt, MMTableViewInfoDelegate, MMCPLabelDelegate, ContactSettingViewControllerDelegate, ForwardMessageLogicDelegate> {
    MMTableViewInfo *m_tableViewInfo;
    NSString *m_cpKeyForNickname;
    BOOL m_isNickNameUnsafe;
    UIView *m_footerView;
    ContactSettingViewController *m_settingViewController;
    ForwardMessageLogicController *m_forwardLogic;
    NSMutableDictionary *m_sessionReportParam;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0 delegate:(id)a1;
- (void)initTableView;
- (id)GetTableView;
- (id)getFooterView;
- (void)loadFooterView;
- (id)getProfileIntroView;
- (void)adjustmentProfileIntroViewTail:(double)a0 andProfileIntroView:(id)a1 andradiusCornerView:(id)a2;
- (id)getProfileHeadView;
- (void)showHDHeadViewImage;
- (void)reloadNavigationBarItem;
- (void)reloadTableView;
- (id)getSection;
- (void)addShareContactSection;
- (void)willDisplayYuanbaoShareCell:(id)a0 indexPath:(id)a1;
- (void)addMsgActionView;
- (void)sendMsgBtnCell:(id)a0 CellInfo:(id)a1;
- (void)addWXChatBotSection;
- (void)addOpenIMSection;
- (void)makeOpenIMNormalCell:(id)a0 CellInfo:(id)a1;
- (void)onOpenIMNormalClicked:(id)a0;
- (BOOL)shouldRemoveContactPopPreviousPage;
- (void)onAction;
- (void)onNewMessage:(id)a0;
- (void)showChatBotExtentInfo:(id)a0;
- (void)opShareMyFriend;
- (void)scrollViewDidScroll:(id)a0;
- (void)onHDHeadImageWillAppear;
- (void)onHDHeadImageDidDisappear;
- (void)updateCPState;
- (void)onRestoreCPLabel:(id)a0;
- (void)OnForwardMessageSend:(id)a0;
- (id)getCurrentViewController;
- (void)reportExposureYuanBaoShareCell;
- (void)reportClickYuanBaoShareCell;
- (id)getReportParams;
- (void).cxx_destruct;

@end
