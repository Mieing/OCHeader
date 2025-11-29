@class AWEIMChatModel;

@interface AWEIMAccountLabelTagComponent : AWEIMChatCellComponentBase

@property (weak, nonatomic) AWEIMChatModel *kvoChat;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)noti_themeDidChange;
- (void)p_setOfficialAccountLabelColor:(id)a0;
- (void)p_setSilverWingChatLabelColor;
- (void)p_setOfficialAccountLabelText:(id)a0;
- (void)p_addKVOWithChatModel:(id)a0;
- (void).cxx_destruct;

@end
