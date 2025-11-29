@class UILabel;

@interface MMFinderLiveFeedStreamBaseRecommendWordingView : UIView

@property (retain, nonatomic) UILabel *prefixLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *suffixLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateWithWording:(id)a0;
- (void).cxx_destruct;

@end
