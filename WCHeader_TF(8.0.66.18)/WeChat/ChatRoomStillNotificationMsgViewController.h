@class NSString, ChatRoomSpecialAttentionAddMemberLogic, DelaySwitchSettingLogic, MMTableViewInfo, NSMutableArray, CContact, MMTableView, ChatRoomSpecialAttentionDeleteMemberLogic;

@interface ChatRoomStillNotificationMsgViewController : ChatRoomBaseMemberFunctionViewController <ChatRoomSpecialAttentionMemberPageLogicDelegate> {
    NSMutableArray *m_attentionMemberContactList;
    NSMutableArray *m_chatRoomMemContactList;
    ChatRoomSpecialAttentionAddMemberLogic *m_addMemberSelectContactLogic;
    ChatRoomSpecialAttentionDeleteMemberLogic *m_deleteMemberSelectContactLogic;
    MMTableView *m_tableView;
    NSMutableArray *m_initialAttentionMemberUserNameList;
    NSMutableArray *m_chatRoomMemContactUserNameList;
    BOOL m_isAtMeNotificationMsg;
    BOOL m_isAtAllNotificationMsg;
    BOOL m_isGroupNoticeNotificationMsg;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
    MMTableViewInfo *m_tableViewInfo;
}

@property (retain, nonatomic) NSString *reportSessionId;
@property (retain, nonatomic) CContact *chatRoomContact;
@property (nonatomic) BOOL isOnlyShowSpecialAttentionMember;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)initData;
- (id)getAddMemberSelectContactLogic;
- (id)getDeleteMemberSelectContactLogic;
- (void)reloadData;
- (id)getChatRoomContact;
- (unsigned int)getNeedPushFlag;
- (double)getCellMargin;
- (double)getCellTitleLeftMargin;
- (double)getCellAddImageViewLeftMargin;
- (double)getAddImageSizeLength;
- (double)getCellRemoveButtonRightMargin;
- (void)commitAllSwitchSetting;
- (void)reloadTableData;
- (void)setAtMeNotificationMsg:(id)a0;
- (void)setAtAllNotificationMsg:(id)a0;
- (void)setGroupNoticeNotificationMsg:(id)a0;
- (void)didFunctionAddMember;
- (void)modifySpecialAttentionMember;
- (void)didRemoveOperateButton:(id)a0;
- (id)navigationBarBackgroundColor;
- (void)reportChatRoomSpecialAttentionMemberLog;
- (void)OnModifyChatRoomSpecialAttentionMember:(id)a0 withResult:(unsigned int)a1 isAddMember:(BOOL)a2;
- (void)reportClickAddFollowMember:(id)a0;
- (void)reportClickOpereateFollowMember:(id)a0 isAdd:(BOOL)a1;
- (void)reportGroupSettingSwitchUpdate:(BOOL)a0 groupSettingSwtichType:(unsigned int)a1;
- (id)getReportParams;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)a0;
- (id)m_tableView;
- (void)setM_tableView:(id)a0;
- (void).cxx_destruct;

@end
