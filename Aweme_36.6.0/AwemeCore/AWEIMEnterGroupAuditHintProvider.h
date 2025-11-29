@class NSString;
@protocol IESIMApplyJoinGroupDataManagerProtocol;

@interface AWEIMEnterGroupAuditHintProvider : AWEIMChatListHintProviderComponentBase <AWEIMChatListDataInsertAction>

@property (retain, nonatomic) id<IESIMApplyJoinGroupDataManagerProtocol> dataManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (unsigned long long)typeOfProvidingHint;
- (unsigned long long)priorityOfProvidingHint;
- (void)reloadHintWithCellContext:(id)a0;
- (BOOL)isCompatibleWithTimeText;
- (void)updateCellComponentWhenChatUpdate:(id)a0;
- (void)didDisplayedHint:(id)a0 cellContext:(id)a1;
- (void)didClickedHint:(id)a0 cellContext:(id)a1;
- (void)asyncUpdateHintVMWithChatModel:(id)a0;
- (void)didInsertedChatListForChats:(id)a0;
- (void)requestEnterGroupApplyWithChatModels:(id)a0;
- (void)handleReceiveJoinGroupApplyNotice:(id)a0;
- (BOOL)isSupportUpdateHintWithConversation:(id)a0;
- (void)updateHintForConversationId:(id)a0 content:(id)a1;
- (void)updateEnterGroupAuditHintForConversationId:(id)a0 unreadCount:(id)a1 con:(id)a2;
- (BOOL)p_disableHighLightWithCon:(id)a0;
- (BOOL)isCompatibleWithMention;
- (void).cxx_destruct;
- (void)addNotificationObserver;

@end
