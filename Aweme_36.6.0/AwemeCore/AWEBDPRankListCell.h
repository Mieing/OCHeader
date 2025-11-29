@class NSString, UIImageView, UILabel, UIButton;
@protocol AWEBDPRankListCellDelegate;

@interface AWEBDPRankListCell : UITableViewCell

@property (retain, nonatomic) UIImageView *rankImageView;
@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UILabel *nickName;
@property (retain, nonatomic) UILabel *score;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UILabel *rank;
@property (retain, nonatomic) NSString *secUid;
@property (weak, nonatomic) id<AWEBDPRankListCellDelegate> delegate;

- (void)openProfile:(id)a0;
- (void)updateRankImageViewWithRank:(id)a0;
- (void)config:(id)a0 withRank:(id)a1 suffix:(id)a2;
- (void)reuse:(id)a0 withRank:(id)a1 suffix:(id)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
