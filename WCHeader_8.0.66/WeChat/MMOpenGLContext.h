@class NSString, EAGLContext, NSObject;
@protocol OS_dispatch_queue;

@interface MMOpenGLContext : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *contextQueue;
@property (retain, nonatomic) NSString *queueName;
@property (readonly, retain, nonatomic) EAGLContext *context;

- (id)init;
- (id)initWithQueueName:(id)a0;
- (id)createGLContext;
- (void)runSyncOnOpenGLESProcessQueue:(id /* block */)a0;
- (void)runAsyncOnOpenGLESProcessQueue:(id /* block */)a0;
- (void)runSyncOnOpenGLESProcessQueueTrue:(id /* block */)a0;
- (void).cxx_destruct;

@end
