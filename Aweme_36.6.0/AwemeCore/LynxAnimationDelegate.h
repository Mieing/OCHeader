@class NSString;

@interface LynxAnimationDelegate : NSObject <CAAnimationDelegate>

@property (copy, nonatomic) id /* block */ didStart;
@property (copy, nonatomic) id /* block */ didStop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initWithDidStart:(id /* block */)a0 didStop:(id /* block */)a1;
+ (void)sendAnimationEvent:(id)a0 eventName:(id)a1 eventParams:(id)a2;

- (void)didStop:(id)a0 withFlag:(BOOL)a1;
- (void)animationDidStart:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)forceStop;

@end
