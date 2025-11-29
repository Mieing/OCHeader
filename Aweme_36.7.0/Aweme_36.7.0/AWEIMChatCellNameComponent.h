@class AWEIMChatModel;

@interface AWEIMChatCellNameComponent : AWEIMChatCellComponentBase

@property (weak, nonatomic) AWEIMChatModel *kvoChat;

+ (id)nameAttributes;

- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)p_updatePresenter:(id)a0;
- (void)updateFormatUserNameIfNeed:(id)a0 defaultName:(id)a1;
- (void).cxx_destruct;

@end
