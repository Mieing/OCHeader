@class NSObject;
@protocol OS_dispatch_semaphore;

@interface Detecter : NSObject

@property (retain) NSObject<OS_dispatch_semaphore> *wait_sem;
@property BOOL isStop;
@property (copy) id /* block */ onStuck;
@property (copy) id /* block */ onSmooth;
@property (nonatomic) char detectCount;
@property (nonatomic) char stuckHitCount;
@property (nonatomic) char smoothHitCount;
@property char state;
@property double detectInterval;

- (BOOL)isStuck;
- (void)transToNewState:(char)a0;
- (void)tryUpdateState:(double)a0;
- (void)CheckStuck:(double)a0 pongTime:(double)a1;
- (id)initWithParam:(id /* block */)a0 onSmooth:(id /* block */)a1;
- (void)setDetecterInterval:(double)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;
- (BOOL)isSmooth;

@end
