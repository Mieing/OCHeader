@class AWEIMMessage, NSString, AWEBinding, NSAttributedString;
@protocol AWEIMChatCellHintComponentInterface, AWEIMMessageHintContentInterface;

@interface AWEIMChatCellMessageStateComponent : AWEIMChatCellComponentBase <AWEIMChatCellMessageStateInterface, AWEIMChatCellHintComponentAction>

@property (weak, nonatomic) id<AWEIMMessageHintContentInterface> messageHintService;
@property (weak, nonatomic) id<AWEIMChatCellHintComponentInterface> hintService;
@property (retain, nonatomic) NSAttributedString *stateAttributedStringForMessageHint;
@property (weak, nonatomic) AWEIMMessage *kvoLatestMessage;
@property (weak, nonatomic) AWEIMMessage *kvoLatestHintMessage;
@property (nonatomic) BOOL enableNonImportantSplit;
@property (retain) AWEBinding *messageBinding;
@property (retain) AWEBinding *readReceiptBinding;
@property (retain) AWEBinding *stateBinding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)didUpdateWithHintType:(unsigned long long)a0;
- (void)p_observeLatestMessageState:(id)a0;
- (void)p_updateMessageStateHint:(id)a0;
- (void)p_updateMessageStateIcon:(id)a0;
- (id)p_messageProgressContent:(id)a0;
- (void)p_handleKVOCallbackWithIconUpdate:(BOOL)a0 onlyDisplayMessageStateText:(BOOL)a1;
- (void)p_updateMessageStateKVO:(id)a0;
- (void)p_updateReadReceiptKVO:(id)a0;
- (id)p_chatLogInfo:(id)a0;
- (id)p_msgLogInfo:(id)a0;
- (void).cxx_destruct;

@end
