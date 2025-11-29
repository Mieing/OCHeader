@class AWEIMChatModel, NSString;

@interface AWEIMChatCellAvatarComponent : AWEIMChatCellComponentBase <AWEIMChatCellAvatarInterface>

@property (weak, nonatomic) AWEIMChatModel *kvoChat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)p_updatePresenter:(id)a0;
- (void)prefetchChatAvatar;
- (void).cxx_destruct;

@end
