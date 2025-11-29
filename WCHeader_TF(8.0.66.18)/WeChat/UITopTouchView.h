@class NSString, NSMutableArray;

@interface UITopTouchView : UIView <UIGestureRecognizerDelegate> {
    BOOL _isTopTouch;
    BOOL _isTransGesture;
    id _touchTarget;
    NSMutableArray *_requestFailed2EdgePanGesArr;
    SEL _touchSelBegan;
    SEL _touchSelMoved;
    SEL _touchSelEnded;
    SEL _touchSelCancelled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transGesture:(BOOL)a0;
- (void)addTopTouchTarget:(id)a0 began:(SEL)a1 moved:(SEL)a2 ended:(SEL)a3 cancelled:(SEL)a4;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)addRequestFailed2EdgePanGes:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)addGestureRecognizer:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
