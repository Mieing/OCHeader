@class UILabel, AWECoCreatorSectionHeaderCellModel, UIView;

@interface AWECoCreatorSectionHeaderCell : UITableViewCell

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *cornerBackgroundView;
@property (retain, nonatomic) AWECoCreatorSectionHeaderCellModel *model;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateSubviews;
- (void)updateWithModel:(id)a0;
- (void)configureSubviews;

@end
