@class IESLiveGameOpenPlatformRevenueRankListHeaderModel, UIImageView, UILabel, UIView;

@interface IESLiveGameOpenPlatformRevenueRankHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) IESLiveGameOpenPlatformRevenueRankListHeaderModel *viewModel;
@property (retain, nonatomic) UILabel *revenueLabel;
@property (retain, nonatomic) UIView *descView;
@property (retain, nonatomic) UIImageView *descImageView;
@property (retain, nonatomic) UILabel *descLabel;

- (void)setupWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setup;

@end
