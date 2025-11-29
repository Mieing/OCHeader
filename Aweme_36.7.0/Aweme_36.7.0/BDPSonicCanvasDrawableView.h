@class SonicView;

@interface BDPSonicCanvasDrawableView : BDPCanvasDrawableViewBase

@property (retain, nonatomic) SonicView *sonicView;

- (void)createEngineViewIfNeed:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateInnerViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)doDispatchTouch:(long long)a0 touches:(id)a1 withEvent:(id)a2;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
