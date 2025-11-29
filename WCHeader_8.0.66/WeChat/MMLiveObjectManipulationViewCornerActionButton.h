@class NSString, UIGestureRecognizer;
@protocol MMLiveObjectManipulationViewCornerActionButtonDelegate, MMLiveObjectManipulationViewCornerAction;

@interface MMLiveObjectManipulationViewCornerActionButton : MMUIButton <UIGestureRecognizerDelegate>

@property (retain, nonatomic) id<MMLiveObjectManipulationViewCornerAction> actionDescriptor;
@property (retain, nonatomic) UIGestureRecognizer *actionGestureRecognizer;
@property (nonatomic) BOOL forManipulationAction;
@property (weak, nonatomic) id<MMLiveObjectManipulationViewCornerActionButtonDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithCustomAction:(id)a0;
- (void)updateWithManipulationAction:(id)a0 manipulatedView:(id)a1 accessibilityDescriptor:(id)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)onTapped;
- (void)onManipulationGesture:(id)a0;
- (void).cxx_destruct;

@end
