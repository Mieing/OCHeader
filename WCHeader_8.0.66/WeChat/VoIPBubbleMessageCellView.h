@class VoIPBubbleMessageViewModel, UIView;

@interface VoIPBubbleMessageCellView : CommonMessageCellView {
    UIView *m_unreadImageView;
}

@property (readonly, nonatomic) VoIPBubbleMessageViewModel *viewModel;

- (void)layoutContentView;
- (void)updateStatus;
- (void)onTouchUpInside;
- (void)onClicked;
- (void)tapVoiceVoipNodeView;
- (void)startVoiceVoip;
- (void)tapVoipNodeView;
- (void)startVideoVoip;
- (void).cxx_destruct;

@end
