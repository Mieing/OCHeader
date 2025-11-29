@class MailMessageViewModel, UIImageView;

@interface MailMessageCellView : BaseMessageCellView {
    UIImageView *m_bgImageView;
}

@property (readonly, nonatomic) MailMessageViewModel *viewModel;

- (void)layoutContentView;
- (void)onDelete:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)onTouchUpInside;
- (void).cxx_destruct;

@end
