@class ReaderMessageFolderViewModel, ChatTimeViewModel, ChatTimeNodeRightButtonInfo, NSMutableArray;

@interface ReaderMessageFolder : CMessageWrap

@property (retain, nonatomic) ChatTimeNodeRightButtonInfo *rightButtonInfo;
@property (retain, nonatomic) NSMutableArray *messageWrapList;
@property (weak, nonatomic) ReaderMessageFolderViewModel *folderViewModel;
@property (weak, nonatomic) ChatTimeViewModel *timeViewModel;
@property (readonly, nonatomic) unsigned int templateOpType;

- (id)initWithMsgType:(long long)a0;
- (unsigned int)m_uiMesLocalID;
- (id)m_nsFromUsr;
- (id)m_nsRealChatUsr;
- (unsigned int)m_uiCreateTime;
- (id)m_nsTemplateId;
- (unsigned int)m_uiTemplateType;
- (unsigned int)m_subscrMsgScopeType;
- (BOOL)IsSameMsg:(id)a0;
- (void).cxx_destruct;

@end
