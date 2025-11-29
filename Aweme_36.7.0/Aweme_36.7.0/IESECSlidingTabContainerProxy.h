@class IESECSlidingTabContainerView;

@interface IESECSlidingTabContainerProxy : NSProxy

@property (weak, nonatomic) id scrollViewTarget;
@property (weak, nonatomic) IESECSlidingTabContainerView *interceptor;

- (id)initWithScrollViewTarget:(id)a0 interceptor:(id)a1;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
