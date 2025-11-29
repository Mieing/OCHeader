@interface AWEControllerEventDistributor : NSObject

- (void)dispatchEvent:(id)a0 invocation:(id)a1;
- (void)p_log:(id)a0 selectorName:(SEL)a1 startTime:(double)a2 endTime:(double)a3;
- (void)dispatchEvent:(id)a0 selector:(SEL)a1 execBlock:(id /* block */)a2;

@end
