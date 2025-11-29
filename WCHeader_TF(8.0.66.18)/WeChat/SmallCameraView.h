@class NSString, MoveWithTouchAlgorithm;
@protocol SmallCameraViewDelegate;

@interface SmallCameraView : UIView <MoveWithTouchAlgorithmDelegate> {
    BOOL _hasMoved;
}

@property (retain, nonatomic) MoveWithTouchAlgorithm *m_moveAlgorithm;
@property (weak, nonatomic) id<SmallCameraViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)adsorbToWindow;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint { double x0; double x1; })a0;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(struct CGPoint { double x0; double x1; })a0;
- (void)onMoveWithTouchAlgorithmTaped:(struct CGPoint { double x0; double x1; })a0;
- (id)onMoveWithTouchAlgorithmRequestView;
- (struct CGPoint { double x0; double x1; })transformPointWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
