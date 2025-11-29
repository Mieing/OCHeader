@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MessageAssetThreshold : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long maxConcurrent;

- (void)fetchAssetImage:(id)a0 processBlock:(id /* block */)a1 resultBlock:(id /* block */)a2 errorBlock:(id /* block */)a3;
- (void).cxx_destruct;

@end
