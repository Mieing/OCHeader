@class UIImageView, CALayer, UIView;

@interface IESLiveTeamFightBorderView : UIView

@property (retain, nonatomic) UIImageView *ownerBorderView;
@property (retain, nonatomic) UIView *ownerSplitView;
@property (retain, nonatomic) UIImageView *oppoBorderView;
@property (retain, nonatomic) UIView *oppoSplitView;
@property (retain, nonatomic) CALayer *ownerLayer;
@property (retain, nonatomic) CALayer *oppoLayer;

- (void)updateWithOwnerEnlarge:(BOOL)a0 oppoEnlarge:(BOOL)a1;
- (void)remakeBorderAppearance;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupViews;

@end
