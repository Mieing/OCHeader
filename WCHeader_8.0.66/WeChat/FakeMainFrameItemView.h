@class MMCPLabel, FakeMainFrameCellData, UILabel, FakeHeadImageView;

@interface FakeMainFrameItemView : MMUIView {
    FakeHeadImageView *m_frameHeadView;
    MMCPLabel *m_nameLabel;
    UILabel *m_timeLabel;
    MMCPLabel *m_messageLabel;
    FakeMainFrameCellData *m_cellData;
}

- (id)initWithCellData:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)layoutSubviews;
- (void)initSubViews;
- (void)updateHeadView;
- (void)updateMessageLabel;
- (void)updateTimeLabel;
- (void)updateNameLabel;
- (id)getLabelNameColor;
- (void).cxx_destruct;

@end
