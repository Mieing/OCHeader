@class NSObject;
@protocol OS_dispatch_source;

@interface WebViewSanboxTaskGcdTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) id userInfo;

+ (id)scheduledTimerWithQueue:(id)a0 timeInterval:(double)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4 repeats:(BOOL)a5;
+ (id)scheduledTimerWithQueue:(id)a0 timeInterval:(double)a1 block:(id /* block */)a2 userInfo:(id)a3 repeats:(BOOL)a4;

- (void)invalidate;
- (void)dealloc;
- (void).cxx_destruct;

@end
