@class UILabel, UIImageView, UIView;

@interface AWEIMGroupListSortingMenuViewTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) UIView *separateLine;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)__setupUI;
- (void)__updateHightLightColor:(BOOL)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
