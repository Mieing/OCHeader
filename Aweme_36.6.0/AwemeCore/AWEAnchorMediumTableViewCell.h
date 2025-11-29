@class AWEAnchorMediumModel, UIImageView, UILabel, UIButton;

@interface AWEAnchorMediumTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *addButton;
@property (retain, nonatomic) AWEAnchorMediumModel *mediumModel;
@property (copy, nonatomic) id /* block */ addMediumBlock;

+ (id)cellIdentifier;

- (void)updateUIWithAnchorMediumModel:(id)a0;
- (void)addGameAnchorTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupSubviews;

@end
