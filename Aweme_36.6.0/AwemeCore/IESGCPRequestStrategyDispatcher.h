@class NSTimer, IESGCPRequestDispatchStrategy;

@interface IESGCPRequestStrategyDispatcher : NSObject

@property (nonatomic) long long currentTriggerCount;
@property (retain, nonatomic) IESGCPRequestDispatchStrategy *strategy;
@property (retain, nonatomic) NSTimer *triggedTimer;

- (long long)arc4randomFrom:(long long)a0 to:(long long)a1;
- (void)invalidateDispatcher;
- (void)refreshStrategy:(id)a0;
- (void)resetTryCount;
- (BOOL)scheduledDispatchWithTriggerHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
