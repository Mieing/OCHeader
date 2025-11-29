@class UIImageView, AWEChallengeStarBillBoardStrokeRankLabel, UILabel;

@interface AWEChallengeStarBillBoardLabel : UIView

@property (retain, nonatomic) UIImageView *rankBackgroundImageView;
@property (retain, nonatomic) UIImageView *textBackgroundImageView;
@property (retain, nonatomic) AWEChallengeStarBillBoardStrokeRankLabel *rankLabel;
@property (retain, nonatomic) UIImageView *rankPlusIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *moreIcon;
@property (nonatomic) struct CGSize { double width; double height; } size;

- (void)updateWithRank:(long long)a0 action:(id /* block */)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
