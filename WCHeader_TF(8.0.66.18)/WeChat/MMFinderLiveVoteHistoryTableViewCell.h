@class UILabel, UIImageView;

@interface MMFinderLiveVoteHistoryTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initUI;
- (void)configWithTitle:(id)a0 desc:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
