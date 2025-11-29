@class UIImageView, UILabel, IESEffectModel;

@interface AWEFilterBoxFilterCell : UITableViewCell

@property (retain, nonatomic) UIImageView *filterImageView;
@property (retain, nonatomic) UILabel *filterNameLabel;
@property (retain, nonatomic) UIImageView *checkImageView;
@property (retain, nonatomic) IESEffectModel *filterModel;
@property (nonatomic) unsigned long long iconStyle;

- (void)configWithIconStyle:(unsigned long long)a0;
- (void)configWithRoundStyle;
- (void)configWithSquareStyle;
- (void)setCheckImageViewChecked:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
