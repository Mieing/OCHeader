@class UIImageView, UILabel, UIView, MMWebImageView;

@interface Olympic2024ChampionTailView : BraceletChampionTailView

@property (retain, nonatomic) MMWebImageView *iconView;
@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) UIView *seperatorView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *arrowView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)displayText;
- (void)setRankExtInfo:(id)a0;
- (void)initViews;
- (void)layoutUI;
- (void).cxx_destruct;

@end
