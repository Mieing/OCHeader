@class MMUILabel, BrandNotificationCellViewModel, CALayer, RichTextView, MMHeadImageView;

@interface BrandNotificationCellView : MMMultiMenuTableViewCell

@property (retain, nonatomic) BrandNotificationCellViewModel *viewModel;
@property (retain, nonatomic) MMHeadImageView *headerView;
@property (retain, nonatomic) CALayer *bottomLine;
@property (retain, nonatomic) RichTextView *messageLabel;
@property (retain, nonatomic) RichTextView *contactNameLabel;
@property (retain, nonatomic) MMUILabel *timeLabel;

- (id)initWithModel:(id)a0;
- (void)updateViewModel:(id)a0;
- (void)updateTimeLabel;
- (void)initSubViews;
- (void)initHeaderView;
- (void)initContactNameLabel;
- (void)initMessageLabel;
- (void)updateHeaderViewSize;
- (void)layoutSubviews;
- (id)genMenuItems;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
