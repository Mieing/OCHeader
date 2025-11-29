@class NSSet, NSString, UIView;
@protocol AFDSelectionContainerViewDelegate;

@interface AFDSelectionContainerView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *selectedView;
@property (copy, nonatomic) NSSet *includedViews;
@property (weak, nonatomic) id<AFDSelectionContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_pan:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
