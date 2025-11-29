@class NSString, TTDispatchResult, NSObject;
@protocol OS_dispatch_semaphore;

@interface TTURLDispatch : NSObject

@property (copy, nonatomic) NSString *originalUrl;
@property (copy, nonatomic) NSString *requestTag;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) TTDispatchResult *result;
@property (nonatomic) int delayTimeMils;
@property (nonatomic) BOOL bypassDomainMerge;
@property (weak, nonatomic) id /* block */ delayCallback;

- (id)initWithUrl:(id)a0 requestTag:(id)a1 delayCallback:(id /* block */)a2;
- (int)syncGetDelayTimeOnNetThread;
- (id)initWithUrl:(id)a0 requestTag:(id)a1 bypassDomainMerge:(BOOL)a2;
- (void)doDelay;
- (void)delayAwait;
- (void)await:(int)a0;
- (void)awaitV2:(int)a0;
- (void)doDispatch;
- (void).cxx_destruct;
- (void)resume;
- (void)dealloc;

@end
