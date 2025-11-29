@class UIColor;

@interface BDPCameraFocusView : UIView {
    double _sideLength;
    UIColor *_sideColor;
}

- (id)initWithSideLength:(double)a0 sideColor:(id)a1;
- (void)showOnView:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
