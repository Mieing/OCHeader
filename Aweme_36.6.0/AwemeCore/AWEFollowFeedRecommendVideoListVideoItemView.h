@class UIImageView, UILabel, CAGradientLayer;

@interface AWEFollowFeedRecommendVideoListVideoItemView : UIView

@property (nonatomic) BOOL isBigCardStyle;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) CAGradientLayer *bgGradientLayer;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
