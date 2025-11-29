@class UIImageView, WAAppMessageViewModel, UILabel, MMWebImageView;

@interface WAAppMessageCellView : WAAppMessageBaseCellView

@property (retain, nonatomic) UILabel *cardTitleLabel;
@property (retain, nonatomic) MMWebImageView *iconView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *newsTitleLabel;
@property (retain, nonatomic) UIImageView *thumbImageView;
@property (readonly, nonatomic) WAAppMessageViewModel *viewModel;

- (void)layoutContentView;
- (void)initWAAppDefaultNewsView;
- (void).cxx_destruct;

@end
