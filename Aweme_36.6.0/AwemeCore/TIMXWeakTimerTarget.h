@interface TIMXWeakTimerTarget : NSObject

@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void)timerDidFire:(id)a0;

@end
