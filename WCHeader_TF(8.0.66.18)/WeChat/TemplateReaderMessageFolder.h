@class ChatTimeNodeRightButtonInfo, ChatTimeViewModel, TemplateReaderMessageFolderViewModel, NSMutableArray;

@interface TemplateReaderMessageFolder : CMessageWrap

@property (retain, nonatomic) NSMutableArray *messageWrapList;
@property (weak, nonatomic) TemplateReaderMessageFolderViewModel *folderViewModel;
@property (weak, nonatomic) ChatTimeViewModel *timeViewModel;
@property (readonly, nonatomic) unsigned int templateOpType;
@property (retain, nonatomic) ChatTimeNodeRightButtonInfo *rightButtonInfo;

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
