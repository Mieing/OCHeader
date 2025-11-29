@class UIImageView, UIView, AWESearchMerchandiseCommonInfo, UILabel;

@interface AWESearchGoodsLeaderboardView : UIView

@property (retain, nonatomic) AWESearchMerchandiseCommonInfo *leaderboard;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *bgColorView;
@property (retain, nonatomic) UILabel *leaderboardLabel;
@property (retain, nonatomic) UILabel *extraLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;

- (void)configBGColor;
- (BOOL)hasLeaderBoardIconConfig;
- (double)leaderboardMaxWidthWithContainerWidth:(double)a0;
- (double)extraLabelWidth;
- (double)leaderboardLabelWidth;
- (double)leaderBoardIconWidth;
- (double)contentTotalWidth;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
