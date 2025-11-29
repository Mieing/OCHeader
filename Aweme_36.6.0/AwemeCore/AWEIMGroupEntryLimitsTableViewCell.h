@class AWEIMCardStyleCellContainerView, AWEIMGroupEntrySettingMenuOptionModel, UIImageView, UILabel, UIView;

@interface AWEIMGroupEntryLimitsTableViewCell : UITableViewCell

@property (retain, nonatomic) AWEIMGroupEntrySettingMenuOptionModel *option;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) AWEIMCardStyleCellContainerView *containerView;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) BOOL useCardStyle;

- (void)configWithTitle:(id)a0 isSelected:(BOOL)a1;
- (id)baseContentView;
- (void)configWithCellCornerType:(unsigned long long)a0 shouldShowLineAtCellBottom:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
