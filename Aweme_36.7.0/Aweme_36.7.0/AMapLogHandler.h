@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AMapLogHandler : NSObject

@property (copy, nonatomic) NSString *componentName;
@property (readonly, nonatomic) NSString *logHandlerName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *logHandlerQueue;
@property (readonly, nonatomic, getter=isOnGlobalLoggingQueue) BOOL onGlobalLoggingQueue;
@property (readonly, nonatomic, getter=isOnInternalLoggerQueue) BOOL onInternalLoggerQueue;

- (void)uploadLogWithlevelStr:(id)a0 complete:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)logMessage:(id)a0;

@end
