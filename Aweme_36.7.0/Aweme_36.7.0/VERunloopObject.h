@class NSObject;
@protocol OS_dispatch_semaphore;

@interface VERunloopObject : IESMMObject {
    int __blockCount;
}

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;

- (id)initWithGCDName:(id)a0;
- (void)runAsync:(id /* block */)a0;
- (void)runSync:(id /* block */)a0;
- (void).cxx_destruct;

@end
