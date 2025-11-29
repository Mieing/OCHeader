@class UIImageView, UILabel, UIView;

@interface WAAppAuthorizeOptionTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *toggleImageView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UILabel *titleLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)toggle;
- (void)unToggle;
- (void).cxx_destruct;

@end
