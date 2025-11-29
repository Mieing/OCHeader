@class UITapGestureRecognizer, NSString;
@protocol RTVInteractionControlViewContainerViewDelegate;

@interface RTVInteractionControlViewContainerView : UIView <UIGestureRecognizerDelegate>

@property (readonly, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) BOOL enableTapGesture;
@property (weak, nonatomic) id<RTVInteractionControlViewContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__tapped:(id)a0;
- (BOOL)__isTapInsideInteractiableArea:(id)a0;
- (void)enableTapGesture:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
