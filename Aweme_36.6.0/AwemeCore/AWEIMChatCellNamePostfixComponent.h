@class AWEIMChatModel;

@interface AWEIMChatCellNamePostfixComponent : AWEIMChatCellComponentBase

@property (weak, nonatomic) AWEIMChatModel *kvoChat;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)p_updatePresenter:(id)a0;
- (void).cxx_destruct;

@end
