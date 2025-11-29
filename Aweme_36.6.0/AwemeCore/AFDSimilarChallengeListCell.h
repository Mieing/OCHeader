@class UIImageView, YYLabel, UILabel;

@interface AFDSimilarChallengeListCell : UITableViewCell

@property (retain, nonatomic) UIImageView *challengeCoverImageView;
@property (retain, nonatomic) UIImageView *hashtagPlaceholderImageView;
@property (retain, nonatomic) YYLabel *hashtagNameLabel;
@property (retain, nonatomic) UILabel *infoLabel;

+ (id)reuseIdentifier;
+ (double)cellHeight;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
