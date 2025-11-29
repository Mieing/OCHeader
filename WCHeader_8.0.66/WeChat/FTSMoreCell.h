@class UIImageView, UILabel, UIView;

@interface FTSMoreCell : MMTableViewCell

@property (retain, nonatomic) UIImageView *moreIcon;
@property (retain, nonatomic) UIImageView *rightArrowIcon;
@property (retain, nonatomic) UILabel *moreTipLabel;
@property (retain, nonatomic) UIView *topLine;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)updateViewMoreTip:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
