@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface FLTSerialTaskQueue : NSObject <FlutterTaskQueueDispatch>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dispatch:(id /* block */)a0;
- (void).cxx_destruct;

@end
