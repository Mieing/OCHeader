@class UIImageView, UILabel;

@interface IESECWinLiveProductOrderIconView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *orderLabel;

- (void)updateIconViewWithRank:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setUpConstraints;

@end
