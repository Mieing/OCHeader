@class IESGCPExplainCardPeriodicTrigger, IESGCPPBIntroduceCardDisplayInfo;

@interface IESGCPExplainCardPeriodicCycler : NSObject

@property (retain, nonatomic) IESGCPExplainCardPeriodicTrigger *trigger;
@property (retain, nonatomic) IESGCPPBIntroduceCardDisplayInfo *config;
@property (nonatomic) BOOL running;
@property (copy, nonatomic) id /* block */ cycleHandler;

- (void)stopPeriodicCycler;
- (void)createPeriodicTrigger;
- (void)startNextCycleIfNeed;
- (void)releasePeriodicTrigger;
- (void)updatePeriodicCyclerConfig:(id)a0;
- (void)startPeriodicCyclerWithCycleHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
