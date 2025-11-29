@class UIView, CADisplayLink;

@interface CJPayRunlampView : UIView

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) UIView *marqueeView;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) double contentMargin;
@property (nonatomic) double pointsPerFrame;

- (void)stopMarquee;
- (void)startMarqueeWith:(id)a0;
- (void)startMarquee;
- (void)processMarquee;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;

@end
