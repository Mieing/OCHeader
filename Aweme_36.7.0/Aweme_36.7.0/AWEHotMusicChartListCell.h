@class UILabel, UIImageView, UIView;

@interface AWEHotMusicChartListCell : UITableViewCell

@property (retain, nonatomic) UIView *rankView;
@property (retain, nonatomic) UILabel *normalRankLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *musicNameLabel;
@property (retain, nonatomic) UIImageView *heatIcon;
@property (retain, nonatomic) UILabel *heatLabel;
@property (retain, nonatomic) UILabel *shootSameLabel;
@property (nonatomic) BOOL isLocatedCell;
@property (copy, nonatomic) id /* block */ shootSameBlock;

- (id)textGradientLayer;
- (void)shootSame;
- (void)updateMusicMetaModel:(id)a0 indexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;

@end
