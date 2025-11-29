@class NSString;
@protocol AWEIMChatCellHintComponentInterface;

@interface AWEIMChatCellLightInteractionStreakRemindComponent : AWEIMChatCellComponentBase <AWEIMChatCellTailProvider, AWEIMChatCellTailAction, AWEIMChatCellHintComponentAction, AWEIMChatCellConsecutiveChatRemindViewDelegate>

@property (weak, nonatomic) id<AWEIMChatCellHintComponentInterface> hintComponentInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onPresenter:(id)a0 willUpdateView:(id)a1;
- (void)didUpdateWithHintType:(unsigned long long)a0;
- (long long)currentComponentTailType;
- (void)didClickConsecutiveChatRemindButton;
- (void).cxx_destruct;

@end
