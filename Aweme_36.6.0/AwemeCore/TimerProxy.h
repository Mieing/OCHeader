@interface TimerProxy : NSObject

@property (weak, nonatomic) id target;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;

@end
