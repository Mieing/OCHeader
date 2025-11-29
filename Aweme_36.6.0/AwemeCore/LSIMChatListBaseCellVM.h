@class NSString, BDECPigeonUnReadCountModel, LSIMBizMessage, LSIMBizConversation, LSIMRequestChatListMemberManager, LSIMUseMember;
@protocol LSBind;

@interface LSIMChatListBaseCellVM : LSListCellVM <LSIMMemberObserver, LSIMListViewModelProtocol>

@property (retain, nonatomic) LSIMBizConversation *keyModel;
@property (retain, nonatomic) LSIMUseMember *member;
@property (retain, nonatomic) LSIMBizMessage *lastMessage;
@property (retain, nonatomic) id<LSBind> messageStatusBinding;
@property (copy, nonatomic) NSString *lastMessageText;
@property (nonatomic) double lastMessageTime;
@property (copy, nonatomic) NSString *lastMessageTimeStr;
@property (nonatomic) BOOL lastMessageSendFailed;
@property (nonatomic) long long unreadCount;
@property (retain, nonatomic) BDECPigeonUnReadCountModel *unreadCountNew;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *avatarURL;
@property (readonly, weak, nonatomic) LSIMBizConversation *conversation;
@property (weak, nonatomic) LSIMRequestChatListMemberManager *requestMemberManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSString *shortID;
@property (nonatomic) unsigned long long modelType;

- (void)handleCellWillDisplay:(id)a0;
- (void)memeberDidUpdate:(id)a0;
- (void)configMember:(id)a0;
- (void)dataUpdateTimestampShow;
- (double)messageTime;
- (void)updateRecalledContentIfNeed;
- (void)conversationDidUpdate;
- (void)deleteByUserOperation;
- (void)clearUnreadMessage;
- (BOOL)canEditInTableRow;
- (void)handleDataBind;
- (void)lastMessageIdDidChanged;
- (void)unreadCountDidChanged;
- (void)updateConversation;
- (void)handleCellDidSelect:(id)a0;
- (void).cxx_destruct;

@end
