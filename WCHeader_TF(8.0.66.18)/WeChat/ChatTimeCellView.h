@class MMTimer, ChatTimeViewModel, UIImageView, UILabel, MMUIButton;

@interface ChatTimeCellView : BaseChatCellView <ChatBackgroundExt> {
    MMTimer *m_updateTimeLabelTimer;
    UILabel *m_timeLabel;
    MMUIButton *m_rightButton;
    UIImageView *m_bgImageView;
}

@property (readonly, nonatomic) ChatTimeViewModel *viewModel;

- (id)initWithViewModel:(id)a0;
- (void)setViewModel:(id)a0;
- (id)getRightButton;
- (BOOL)canBeReused;
- (BOOL)shouldLayoutIfNeeded;
- (void)layoutInternal;
- (void)onChatBackgroundChanged:(id)a0;
- (void)onClickTimeLabel;
- (void)handleRightButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
