@class UIBezierPath, NSString, UIPanGestureRecognizer;

@interface AWESearchPresentContainerInnerView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (retain, nonatomic) UIBezierPath *maskPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
