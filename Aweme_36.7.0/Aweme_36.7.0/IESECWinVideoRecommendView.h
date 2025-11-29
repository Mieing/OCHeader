@class UIImageView, UILabel;

@interface IESECWinVideoRecommendView : UIView

@property (retain, nonatomic) UIImageView *windowIconView;
@property (retain, nonatomic) UILabel *recommendLabel;

- (void)updateRecommendViewWithVideoObject:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setUpConstraints;

@end
