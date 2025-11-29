@class DelaySwitchSettingLogic, MMTableViewInfo;
@protocol WCCommentListManageDelegate;

@interface SettingsMomentsCellViewController : MMUIViewController {
    MMTableViewInfo *m_tableViewInfo;
}

@property (nonatomic) BOOL isMutualFriendsInteractionReminderEnabled;
@property (retain, nonatomic) DelaySwitchSettingLogic *delaySwitchLogic;
@property (weak, nonatomic) id<WCCommentListManageDelegate> delegate;

- (id)init;
- (void)viewWillDisappear:(BOOL)a0;
- (void)saveVideoAutoPlayChanged:(id)a0;
- (void)isMutualFriendsInteractionReminderEnabledSwitchChanged:(id)a0;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)reportMutualFriendsInterfactionSwitchEvent;
- (void).cxx_destruct;

@end
