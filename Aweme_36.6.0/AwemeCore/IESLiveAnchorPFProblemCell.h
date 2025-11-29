@class UILabel;

@interface IESLiveAnchorPFProblemCell : UITableViewCell

@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *contentLabel;

- (void)updateUIWithProblem:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)setupLayout;

@end
