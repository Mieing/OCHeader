@class UIImageView, ilinkMultiTalkMessageViewModel;

@interface ilinkMultiTalkMessageCellView : BaseMessageCellView

@property (retain, nonatomic) UIImageView *bubbleView;
@property (readonly, nonatomic) ilinkMultiTalkMessageViewModel *viewModel;

- (void)layoutContentView;
- (void)onTouchUpInside;
- (BOOL)shouldLayoutIfNeeded;
- (void).cxx_destruct;

@end
