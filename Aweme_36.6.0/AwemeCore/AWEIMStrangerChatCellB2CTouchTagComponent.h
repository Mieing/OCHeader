@class AWEIMChatModel;

@interface AWEIMStrangerChatCellB2CTouchTagComponent : AWEIMChatCellComponentBase

@property (retain, nonatomic) AWEIMChatModel *lastChat;

- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onCellWillDisplay:(id)a0;
- (void)onCellDidClick:(id)a0;
- (void)p_createPresenterIfNeed;
- (void).cxx_destruct;

@end
