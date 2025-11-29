@class AWEIMCardStyleCellContainerView, UIImageView, UILabel, UIView;

@interface AWEIMGroupEntryLimitsDetailCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) AWEIMCardStyleCellContainerView *containerView;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) BOOL useCardStyle;

- (id)baseContentView;
- (void)configWithTitle:(id)a0 detailTitle:(id)a1;
- (void)configWithCellCornerType:(unsigned long long)a0 shouldShowLineAtCellBottom:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
