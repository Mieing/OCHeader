@class NSMutableArray;
@protocol MinimizeAntiCollisionLogicDelegate;

@interface MinimizeAntiCollisionLogic : NSObject

@property (retain, nonatomic) NSMutableArray *trackedViews;
@property (nonatomic) double safeTopInset;
@property (nonatomic) double safeBottomInset;
@property (weak, nonatomic) id<MinimizeAntiCollisionLogicDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)trackView:(id)a0;
- (void)avoidCollisonSelf:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)avoidCollisionFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 except:(id)a1;
- (void)handleTrackedViewMove:(id)a0;
- (id)find:(id)a0;
- (struct CGPoint { double x0; double x1; })checkCollision:(id)a0 with:(id)a1;
- (struct CGPoint { double x0; double x1; })checkCollisionWithFixedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flexibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 atWindow:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getContentFrame:(id)a0;
- (void)onKeyboardWillShow:(id)a0;
- (void)onKeyboardWillHide:(id)a0;
- (void).cxx_destruct;

@end
