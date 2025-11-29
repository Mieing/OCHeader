@class NSString, NSMutableArray, CircleView;

@interface CirclesView : UIView <IMusicSearchExt> {
    NSMutableArray *m_peakPowerArray;
}

@property BOOL animating;
@property (nonatomic) BOOL circleAnimating;
@property (retain, nonatomic) CircleView *circleView;
@property (retain, nonatomic) CircleView *circleView2;
@property (retain, nonatomic) CircleView *circleView3;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startAnimate;
- (void)stopAnimate;
- (void)animateCircle3;
- (void)OnPeakPowerChange:(float)a0;
- (void)startPeakPowerAnimate;
- (void).cxx_destruct;

@end
