@class UIButton, BrandProfileAuthorizedScopeTableCellViewModel, UIView, MMWebImageView, MMUILabel;
@protocol BrandProfileAuthorizedScopeTableCellDelegate;

@interface BrandProfileAuthorizedScopeTableCell : MMMultiMenuTableViewCell

@property (retain, nonatomic) MMWebImageView *appIconImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *stateLabel;
@property (retain, nonatomic) UIView *topSeperatorLine;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) BrandProfileAuthorizedScopeTableCellViewModel *viewModel;
@property (weak, nonatomic) id<BrandProfileAuthorizedScopeTableCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setupSubviews;
- (void)setupMenuItems;
- (void)layoutSubviews;
- (void)applyViewModel:(id)a0;
- (id)wordingForState:(unsigned int)a0;
- (void)onDeleteButtonClicked;
- (BOOL)contextMenuEnabled;
- (void).cxx_destruct;

@end
