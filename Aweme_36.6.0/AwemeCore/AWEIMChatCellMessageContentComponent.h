@class AWEIMUserViewModel, NSString, AWEBinding, NSAttributedString, NSObject;
@protocol AWEIMChatCellHintComponentInterface, IESIMConversationProtocol, AWEIMMessageHintContentInterface;

@interface AWEIMChatCellMessageContentComponent : AWEIMChatCellComponentBase <AWEIMMessageHintContentProvider>

@property (weak, nonatomic) id<AWEIMMessageHintContentInterface> messageHintService;
@property (weak, nonatomic) id<AWEIMChatCellHintComponentInterface> hintService;
@property (retain, nonatomic) NSAttributedString *rawAttributedStringBeforeMatchEmoji;
@property (weak, nonatomic) AWEIMUserViewModel *kvoMessageFromUserVM;
@property (weak, nonatomic) NSObject<IESIMConversationProtocol> *kvoCon;
@property (copy, nonatomic) NSString *lastUnreadAudioMessageID;
@property (retain) AWEBinding *participantsMapBinding;
@property (retain, nonatomic) NSAttributedString *displayAttributedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onCellWillRenderForCurrentComponent;
- (void)updateComponentWhenCellWillRender;
- (id)displayAttributeContent:(id)a0;
- (void)p_reloadLatestMessage:(id)a0;
- (void)p_updateMessageLabelDisplayText:(id)a0;
- (BOOL)p_canGetHintWithoutUserInfo:(id)a0;
- (void)p_getHintWithUserInfo:(id)a0;
- (void)p_updateDisplayTextAccordingToUser:(id)a0 messageSenderOrRecallerVM:(id)a1 chat:(id)a2;
- (void)p_kvoLastMessageSenderIfNeeded:(id)a0 messageSenderOrRecallerVM:(id)a1 chat:(id)a2;
- (void)p_reloadAfterUserInfoUpdate:(id)a0 chat:(id)a1;
- (void)asyncGetStrangerConversationName:(id)a0 completion:(id /* block */)a1;
- (BOOL)p_isIMChatType:(long long)a0;
- (void)generateStrangerNameWithPeerUser:(id)a0 chat:(id)a1 currentUser:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
