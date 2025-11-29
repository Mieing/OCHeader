@class UIImageView, MultiTalkMessageViewModel;

@interface MultiTalkMessageCellView : BaseMessageCellView <ChatBackgroundExt> {
    UIImageView *m_backgroundImageView;
}

@property (readonly, nonatomic) MultiTalkMessageViewModel *viewModel;

- (id)initWithViewModel:(id)a0;
- (BOOL)needUpdateLightStyle;
- (void)layoutContentView;
- (BOOL)canCellShowOperationMenu;
- (void)onChatBackgroundChanged:(id)a0;
- (void).cxx_destruct;

@end
