@interface AWEIMMessageListSlidingTaskComponent : AWEIMComponentBase

@property (nonatomic) BOOL isTracking;
@property (nonatomic) struct __CFRunLoopObserver { } *beginObserver;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)p_addObserver;
- (void)p_removeObserver;
- (void)dealloc;

@end
