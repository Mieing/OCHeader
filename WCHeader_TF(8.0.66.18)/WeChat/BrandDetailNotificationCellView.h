@class UIButton, WCTagsView, YYLabel, BrandDetailNotificationCellViewModel, UILabel, MMHeadImageView;

@interface BrandDetailNotificationCellView : BrandNotificationCellView

@property (retain, nonatomic) MMHeadImageView *headView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIButton *followButton;
@property (retain, nonatomic) WCTagsView *tagsView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) YYLabel *detailLabel;
@property (retain, nonatomic) UILabel *dateLabel;
@property (readonly, nonatomic) BrandDetailNotificationCellViewModel *viewModel;

- (void)layoutSubviews;
- (void)updateViewModel:(id)a0;
- (void)initSubViews;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
