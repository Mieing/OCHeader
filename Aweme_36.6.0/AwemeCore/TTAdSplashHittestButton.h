@class NSArray;

@interface TTAdSplashHittestButton : UIButton

@property (retain, nonatomic) NSArray *hotspots;

- (void)refreshHotspotWith:(id)a0;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
