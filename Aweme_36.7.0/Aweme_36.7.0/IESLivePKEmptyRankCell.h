@class UILabel, UIImageView;

@interface IESLivePKEmptyRankCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *bgImageView;

- (void)layoutUI:(int)a0;
- (void)updateWithRecommend:(int)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;

@end
