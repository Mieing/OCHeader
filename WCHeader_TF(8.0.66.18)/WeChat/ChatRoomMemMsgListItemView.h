@class MMCPLabel, MainFrameCellData, UILabel, MMHeadImageView;

@interface ChatRoomMemMsgListItemView : MMUIView {
    MainFrameCellData *m_cellData;
    MMHeadImageView *m_frameHeadView;
    MMCPLabel *m_nameLabel;
    UILabel *m_timeLabel;
    UILabel *m_greenLabel;
    MMCPLabel *m_messageLabel;
}

- (id)init;
- (void)initSubview;
- (void)updateMessageLabel;
- (void)updateNameLabel;
- (void)updateTimeLabel;
- (void)updateView:(id)a0;
- (void).cxx_destruct;

@end
