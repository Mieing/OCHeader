@class NSObject;
@protocol OS_dispatch_semaphore;

@interface BDPFileTaskOperation_HG : NSObject

@property (nonatomic) unsigned long long operationType;
@property (copy, nonatomic) id /* block */ executionBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;

- (void).cxx_destruct;
- (void)waitUntilFinished;
- (void)start;
- (void)dealloc;

@end
