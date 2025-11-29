@class CContact, MMTableViewInfo;

@interface BraceletProfilePrivacySettingViewController : MMUIViewController {
    MMTableViewInfo *m_tableViewInfo;
    BOOL m_isSettingsChanged;
    CContact *m_contact;
}

- (id)initWithContact:(id)a0;
- (void)viewDidLoad;
- (void)viewWillBePoped:(BOOL)a0;
- (void)initTable;
- (void)onTakePartInSwitchChange:(id)a0;
- (void)onRankMsgSwitchChange:(id)a0;
- (void)onLikeSwitchChange:(id)a0;
- (BOOL)isReceiveMessage;
- (void)updateBrandReceiveMSG;
- (void)goWeSportBlackListView;
- (void).cxx_destruct;

@end
