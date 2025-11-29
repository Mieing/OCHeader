@class NSString, UIView;

@interface IESLiveInteractVideoChorusViewDragAbility : NSObject <UIGestureRecognizerDelegate>

@property (weak, nonatomic) UIView *draggableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dragViewMoved:(id)a0;
- (id)initWithDraggableView:(id)a0;
- (void).cxx_destruct;

@end
