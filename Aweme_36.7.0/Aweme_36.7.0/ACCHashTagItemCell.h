@class UILabel;

@interface ACCHashTagItemCell : UITableViewCell

@property (retain, nonatomic) UILabel *hashtagLabel;
@property (retain, nonatomic) UILabel *playCountLabel;

- (void)configureWithHashTag:(id)a0 playCount:(long long)a1;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
