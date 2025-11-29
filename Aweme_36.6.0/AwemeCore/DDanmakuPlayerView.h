@protocol DDanmakuPlayerViewDelegate;

@interface DDanmakuPlayerView : UIView

@property (weak, nonatomic) id<DDanmakuPlayerViewDelegate> delegate;

- (void)setAlpha:(double)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
