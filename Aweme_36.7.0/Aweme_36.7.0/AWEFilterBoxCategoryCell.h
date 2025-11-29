@class UILabel, IESCategoryModel;

@interface AWEFilterBoxCategoryCell : UITableViewCell

@property (retain, nonatomic) UILabel *categoryNameLabel;
@property (retain, nonatomic) IESCategoryModel *categoryModel;

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
