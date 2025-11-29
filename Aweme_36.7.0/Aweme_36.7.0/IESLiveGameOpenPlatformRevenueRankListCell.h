@class UIImageView, UILabel, IESLiveGameOpenPlatformRevenueRankListCellModel;

@interface IESLiveGameOpenPlatformRevenueRankListCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *revenueLabel;
@property (retain, nonatomic) IESLiveGameOpenPlatformRevenueRankListCellModel *cellModel;

- (void)setupWithCellModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
