@interface AWETrackerTimeManager : NSObject

+ (void)syncTimingBlock:(id /* block */)a0 completion:(id /* block */)a1;
+ (void)syncTimingBlock:(id /* block */)a0 timeout:(unsigned long long)a1 timeoutHandler:(id /* block */)a2;
+ (id)humanizeTimeStamp:(double)a0;

@end
