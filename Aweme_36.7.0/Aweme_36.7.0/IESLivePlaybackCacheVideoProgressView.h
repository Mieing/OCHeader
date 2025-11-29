@class UIColor, UIView;

@interface IESLivePlaybackCacheVideoProgressView : UIView

@property (retain, nonatomic) UIView *filledView;
@property (nonatomic) float progress;
@property (retain, nonatomic) UIColor *filledColor;
@property (retain, nonatomic) UIColor *emptyColor;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_commonInit;

@end
