@class UIImageView, UILabel, UIImage;

@interface MAOfflineMapProvinceCell : UITableViewCell

@property (retain, nonatomic) UIImageView *expandImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImage *normalImage;
@property (retain, nonatomic) UIImage *expandedImage;
@property (nonatomic) BOOL expanded;

- (void)setupExpandImageView;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)setupLabel;

@end
