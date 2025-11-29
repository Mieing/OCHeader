@class NSObject;
@protocol OS_dispatch_queue;

@interface BDHMXLogger : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (void)logWithTag:(id)a0 level:(long long)a1 file:(const char *)a2 func:(const char *)a3 line:(int)a4 message:(id)a5 builder:(id)a6;
+ (id)sharedInstance;

- (void)logWithTag:(id)a0 level:(long long)a1 file:(const char *)a2 func:(const char *)a3 line:(int)a4 message:(id)a5 builder:(id)a6;
- (void).cxx_destruct;
- (id)init;

@end
