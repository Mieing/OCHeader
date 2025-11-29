@class NSObject;
@protocol OS_dispatch_semaphore;

@interface CRDelay : NSObject

@property (nonatomic) double seconds;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;

+ (id)delayWithSeconds:(double)a0;

- (id)initWithDelayInSeconds:(double)a0;
- (void)cancel;
- (void)start;
- (void).cxx_destruct;

@end
