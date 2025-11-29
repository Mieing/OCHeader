@class NSArray, UIPanGestureRecognizer, UIGestureRecognizer;
@protocol AFDHoverInteractor;

@interface AFDHoverableContainerView : UIView

@property (retain, nonatomic) NSArray *hoverablesBeingHoveredOver;
@property (retain, nonatomic) UIGestureRecognizer<AFDHoverInteractor> *hoverInteractor;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;

- (void)hoverCancelledWithHoverable:(id)a0 hoverInteractor:(id)a1;
- (void)hoverBeganWithHoverable:(id)a0 hoverInteractor:(id)a1;
- (void)hoverEndedWithHoverable:(id)a0 hoverInteractor:(id)a1;
- (void)hoverMovedWithHoverable:(id)a0 hoverInteractor:(id)a1;
- (void)makeFeedback;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleHover:(id)a0;

@end
