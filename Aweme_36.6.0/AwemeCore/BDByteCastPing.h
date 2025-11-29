@class NSObject;
@protocol OS_dispatch_queue;

@interface BDByteCastPing : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;

- (id)initWithContextId:(id)a0;
- (void)ping:(id)a0 completionHandler:(id /* block */)a1;
- (void)pingWithString:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
