@interface AWETrackerLogManager : NSObject

@property (copy, nonatomic) id /* block */ logger;

+ (void)logWithInfo:(id)a0;
+ (void)logWithLevel:(unsigned long long)a0 subModule:(id)a1 info:(id)a2;
+ (void)logWithInfo:(id)a0 arguments:(char *)a1;
+ (void)logWithLevel:(unsigned long long)a0 info:(id)a1 arguments:(char *)a2;
+ (void)logWithLevel:(unsigned long long)a0 subModule:(id)a1 info:(id)a2 arguments:(char *)a3;
+ (void)injectLogger:(id /* block */)a0;
+ (void)logWithLevel:(unsigned long long)a0 info:(id)a1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
