@class UIImageView, AWEDetailPropRankingLineCellModel, UILabel, NSMutableArray;

@interface AWEDetailPropRankingLineCell : UITableViewCell

@property (retain, nonatomic) AWEDetailPropRankingLineCellModel *cellModel;
@property (retain, nonatomic) UILabel *indexLabel;
@property (retain, nonatomic) UIImageView *avatarView1;
@property (retain, nonatomic) UIImageView *avatarView2;
@property (retain, nonatomic) UIImageView *avatarView3;
@property (retain, nonatomic) NSMutableArray *avatarViews;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *userCountLabel;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UIImageView *nextArrowView;

- (void)configModel:(id)a0;
- (id)getScoreTextWithScore:(double)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)themeDidChange;

@end
