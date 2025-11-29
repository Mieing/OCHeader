@class UIImageView, UILabel, AWEFeedInsetsLabel;

@interface AWEHotVideoVenationTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *lineArrowView;
@property (retain, nonatomic) UIImageView *lineView;
@property (retain, nonatomic) UILabel *timeInfoLabel;
@property (retain, nonatomic) AWEFeedInsetsLabel *supplementLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (copy, nonatomic) id /* block */ clickBlock;

+ (double)cellHeight:(id)a0;
+ (id)formatDuration:(id)a0;
+ (id)reuseIdentifier;

- (void)configWithModel:(id)a0 isFirst:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
