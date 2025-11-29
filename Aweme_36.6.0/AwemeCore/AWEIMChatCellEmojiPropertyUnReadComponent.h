@class NSString;
@protocol AWEIMChatCellHintComponentInterface;

@interface AWEIMChatCellEmojiPropertyUnReadComponent : AWEIMChatCellComponentBase <AWEIMChatCellTailProvider, AWEIMChatCellHintComponentAction>

@property (weak, nonatomic) id<AWEIMChatCellHintComponentInterface> hintComponentInterface;
@property (nonatomic) BOOL shouldShowRed;
@property (nonatomic) BOOL shouldBoldLastMsgHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)didUpdateWithHintType:(unsigned long long)a0;
- (long long)currentComponentTailType;
- (BOOL)p_shouldShowUnReadEmoji:(id)a0;
- (void)p_updateIfNeeded;
- (void)p_updatePresenterWithChat:(id)a0;
- (void).cxx_destruct;

@end
