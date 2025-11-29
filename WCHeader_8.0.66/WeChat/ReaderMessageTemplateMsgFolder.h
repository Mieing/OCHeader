@class ReaderMessageTemplateMsgFolderViewModel, NSArray, CMessageWrap, NSString;

@interface ReaderMessageTemplateMsgFolder : CMessageWrap

@property (nonatomic) unsigned int earliestCreateTime;
@property (nonatomic) unsigned int earliestMsgLocalID;
@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (weak, nonatomic) ReaderMessageTemplateMsgFolderViewModel *folderViewModel;
@property (nonatomic) unsigned int foldCount;
@property (retain, nonatomic) NSArray *foldMsgTitles;
@property (retain, nonatomic) NSArray *foldMsgUniqueIds;
@property (readonly, nonatomic) unsigned int templateOpType;
@property (copy, nonatomic) NSString *clusterId;

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
