@class UIImageView, UILabel, AWEProfileExtensionAreaCardModel;

@interface AWEProfileExtensionModuleEditTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *model;
@property (nonatomic) BOOL shouldForbidSort;

- (void)__setupUI;
- (void)configWithModel:(id)a0 shouldForbidSort:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;

@end
