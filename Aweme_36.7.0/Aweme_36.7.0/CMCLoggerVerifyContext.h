@interface CMCLoggerVerifyContext : NSObject

+ (id)logInstanceName;
+ (void)dispatch_async_on_process_queue:(id /* block */)a0;
+ (void)dispatch_sync_on_process_queue:(id /* block */)a0;
+ (void)setLogInstanceName:(id)a0;
+ (id)processQueue;

@end
