@class UIColor, CADisplayLink;

@interface WCCanvasAdPageIndicator : UIView

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) BOOL nextPageRunningFlag;
@property (nonatomic) long long nextPageStartPage;
@property (nonatomic) double nextPageStartTimeMs;
@property (nonatomic) double nextPageDuration;
@property (nonatomic) double nextPageProgressOfStartPage;
@property (nonatomic) double nextPageProgressOfNextPage;
@property (nonatomic) BOOL fillCurrentRunningFlag;
@property (nonatomic) double fillCurrentStartProgress;
@property (nonatomic) double fillCurrentStartTimeMs;
@property (nonatomic) double fillCurrentDuration;
@property (retain, nonatomic) UIColor *indicatorColorBg;
@property (retain, nonatomic) UIColor *indicatorColorBorder;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) double progressOfTotal;
@property (nonatomic) double progressOfCurrent;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getSelfFrame;
- (void)setProgressOfCurrentInternal:(double)a0;
- (void)setProgressOfTotalInternal:(double)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRoundedRectangle:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fillColor:(id)a2 strokeColor:(id)a3 shadowColor:(id)a4 drawingMode:(int)a5;
- (struct CGPath { } *)makeRoundedRectanglePath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tryStartDisplayLink;
- (void)releaseDisplayLink;
- (void)displayLinkAutoCheck;
- (void)autoNextPage:(long long)a0 duration:(double)a1;
- (void)autoNextPage:(long long)a0 duration:(double)a1 progressOfStartPage:(double)a2 progressOfNextPage:(double)a3;
- (void)autoFillCurrent:(double)a0 duration:(double)a1;
- (void)stopAutoNextPage;
- (void)stopAutoFillCurrent;
- (void).cxx_destruct;

@end
