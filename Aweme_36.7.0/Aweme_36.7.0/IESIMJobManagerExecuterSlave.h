@class NSObject;
@protocol OS_dispatch_queue;

@interface IESIMJobManagerExecuterSlave : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (readonly, nonatomic) id /* block */ jobFetcher;
@property (readonly, nonatomic) id /* block */ runner;
@property (readonly, nonatomic) BOOL waitForDelay;
@property (nonatomic) double loopBeginTimeStamp;

- (id)initWithJobFetcher:(id /* block */)a0 runner:(id /* block */)a1 targetQueue:(id)a2 waitForDelay:(BOOL)a3;
- (void)p_waitForJobCanBegin:(id)a0;
- (void).cxx_destruct;
- (void)loop;

@end
