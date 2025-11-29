@class UILabel, MMWebImageView;

@interface MMFinderLiveGoodsAskedForPromotingView : UIView

@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) UILabel *label;

+ (BOOL)willEmptyWithInfo:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithInfo:(id)a0;
- (void).cxx_destruct;

@end
