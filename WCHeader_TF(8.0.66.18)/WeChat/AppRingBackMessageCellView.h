@class UIImageView, AppRingBackMessageViewModel;

@interface AppRingBackMessageCellView : BaseMessageCellView

@property (retain, nonatomic) UIImageView *bubbleView;
@property (readonly, nonatomic) AppRingBackMessageViewModel *viewModel;

- (void)layoutContentView;
- (void)onTouchUpInside;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)shouldLayoutIfNeeded;
- (void).cxx_destruct;

@end
