@class UIImageView, RichTextView, PocketMoneyMessageViewModel;

@interface PocketMoneyMessageCellView : CommonMessageCellView

@property (retain, nonatomic) RichTextView *titleLabel;
@property (retain, nonatomic) RichTextView *descLabel;
@property (retain, nonatomic) UIImageView *thumbImageView;
@property (readonly, nonatomic) PocketMoneyMessageViewModel *viewModel;

- (id)operationMenuItems;
- (void)layoutContentView;
- (void)addTitleLabel;
- (void)addDescLabel;
- (void)addThumbImageView;
- (void)onTouchUpInside;
- (void).cxx_destruct;

@end
