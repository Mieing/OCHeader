@interface AWEStudioEditImpl.EditorPaintBoardView : UIView {
    void /* unknown type, empty encoding */ lineWidth;
    void /* unknown type, empty encoding */ lineColor;
    void /* unknown type, empty encoding */ touchEndAction;
    void /* unknown type, empty encoding */ validTouchObserver;
    void /* unknown type, empty encoding */ brushPaintEnabled;
    void /* unknown type, empty encoding */ brushPaintTrackEnable;
    void /* unknown type, empty encoding */ calculateLinePoint;
    void /* unknown type, empty encoding */ paintContainerView;
    void /* unknown type, empty encoding */ lines;
    void /* unknown type, empty encoding */ paintPath;
    void /* unknown type, empty encoding */ shapeLayer;
    void /* unknown type, empty encoding */ lastPoint;
    void /* unknown type, empty encoding */ beforeLastPoint;
    void /* unknown type, empty encoding */ linePointSet;
    void /* unknown type, empty encoding */ hasValidTouchesMoved;
}

- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
