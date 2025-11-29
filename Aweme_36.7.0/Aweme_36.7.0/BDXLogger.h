@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BDXLogger : NSObject

@property (retain, nonatomic) NSMutableDictionary *containerIdMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (void)logWithTag:(id)a0 level:(long long)a1 file:(const char *)a2 func:(const char *)a3 line:(int)a4 message:(id)a5 builder:(id)a6;
+ (void)logWithTag:(id)a0 level:(long long)a1 file:(const char *)a2 func:(const char *)a3 line:(int)a4 message:(id)a5;
+ (void)logWithTag:(id)a0 level:(long long)a1 file:(const char *)a2 func:(const char *)a3 line:(int)a4 message:(id)a5 paramsDict:(id)a6;
+ (void)logWithTag:(id)a0 level:(long long)a1 file:(const char *)a2 func:(const char *)a3 line:(int)a4 message:(id)a5 builderBlock:(id /* block */)a6;
+ (void)attachContainerID:(id)a0 bulletSessionID:(id)a1;
+ (void)logInhouseWithTag:(id)a0 level:(long long)a1 file:(const char *)a2 func:(const char *)a3 line:(int)a4 message:(id)a5 builderBlock:(id /* block */)a6;
+ (id)sharedInstance;

- (void)logWithTag:(id)a0 level:(long long)a1 file:(const char *)a2 func:(const char *)a3 line:(int)a4 message:(id)a5 builder:(id)a6;
- (void)logWithTag:(id)a0 level:(long long)a1 message:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
