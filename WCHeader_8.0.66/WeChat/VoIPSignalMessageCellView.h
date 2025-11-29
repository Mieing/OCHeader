@class VoIPSignalMessageViewModel, UIView;

@interface VoIPSignalMessageCellView : CommonMessageCellView {
    UIView *m_unreadImageView;
}

@property (readonly, nonatomic) VoIPSignalMessageViewModel *viewModel;

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
