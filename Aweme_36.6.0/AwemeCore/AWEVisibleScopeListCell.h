@class UIImageView, UILabel, UIView, MASConstraint;

@interface AWEVisibleScopeListCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UILabel *relationLabel;
@property (retain, nonatomic) UIView *relationView;
@property (retain, nonatomic) MASConstraint *titleTopConstraint;
@property (retain, nonatomic) MASConstraint *titleCenterConstraint;

+ (id)identifier;
+ (double)cellHeight;

- (void)updateSelected:(BOOL)a0;
- (void)configUserForSearching:(id)a0 isSelected:(BOOL)a1 isDisableSelect:(BOOL)a2;
- (void)setDisableSelectForChatGroupAndUser;
- (void)configUser:(id)a0 isSelected:(BOOL)a1 isDisableSelect:(BOOL)a2;
- (void)setDisableStyle;
- (id)relationForAwemeUser:(id)a0;
- (void)pr_configCellTitle:(id)a0 desc:(id)a1 relation:(id)a2 isSelected:(BOOL)a3 isDisableSelect:(BOOL)a4;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
