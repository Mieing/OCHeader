@class AMapLogHandler, NSObject;
@protocol OS_dispatch_queue;

@interface AMapLogHandlerNode : NSObject

@property (readonly, nonatomic) AMapLogHandler *logHandler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *logHandlerQueue;

+ (id)nodeWithLogger:(id)a0 logHandlerQueue:(id)a1;

- (id)initWithLogger:(id)a0 logHandlerQueue:(id)a1;
- (void).cxx_destruct;

@end
