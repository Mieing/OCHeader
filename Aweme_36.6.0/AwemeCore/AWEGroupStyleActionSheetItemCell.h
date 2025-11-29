@class UILabel, UIImageView, UIView;

@interface AWEGroupStyleActionSheetItemCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *rightArrowView;
@property (retain, nonatomic) UIView *bottomLineView;

- (void)p_setup;
- (void)configWithItemModel:(id)a0 itemIndexInGroup:(long long)a1 totalItemInGroup:(long long)a2;
- (void)p_updateContentCornerRadiusWithitemIndexInGroup:(long long)a0 totalItemInGroup:(long long)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
