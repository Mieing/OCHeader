@class WCPayC2CFestivalMsgViewModel, MMUIView, UILabel, MMUILabel;

@interface WCPayC2CFestivalMsgCellView : CommonMessageCellView {
    UILabel *m_descLabel;
    UILabel *m_titleLabel;
}

@property (retain, nonatomic) MMUILabel *bottomLabel;
@property (retain, nonatomic) MMUIView *audioView;
@property (readonly, nonatomic) WCPayC2CFestivalMsgViewModel *viewModel;

- (id)initWithViewModel:(id)a0;
- (void)updateStatus;
- (void)layoutContentView;
- (void)layoutNormalBubbleContentView;
- (id)getContentTextColor;
- (double)getContentMargin;
- (void)layoutHKNewYearBubbleContentView;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutInternal;
- (void)onTouchUpInside;
- (void).cxx_destruct;

@end
