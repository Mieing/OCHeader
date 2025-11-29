@class DelaySwitchSettingLogic, MMTableViewInfo;
@protocol WCCommentListManageDelegate;

@interface WCSettingMsgInteractiveManagementViewController : MMUIViewController {
    MMTableViewInfo *m_tableViewInfo;
}

@property (nonatomic) BOOL isMutualFriendsInteractionReminderEnabled;
@property (retain, nonatomic) DelaySwitchSettingLogic *delaySwitchLogic;
@property (weak, nonatomic) id<WCCommentListManageDelegate> delegate;

+ (BOOL)isMutualFriendsInteractionReminderEnabled;

- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willAppear;
- (void)viewWillDisappear:(BOOL)a0;
- (void)isMutualFriendsInteractionReminderEnabledSwitchChanged:(id)a0;
- (void)addCommonFriendsInteractionsReminderSection;
- (void)addClearAllMessagesSection;
- (void)clearAllCommentList;
- (void)reloadTableData;
- (void)reloadTableDataWithReloadFooterView:(BOOL)a0;
- (void)configInteractionsReminderSectionDataReport:(id)a0;
- (void)reportMutualFriendsInterfactionSwitchEvent;
- (void)configSNSMessageManagementPageReport;
- (void).cxx_destruct;

@end
