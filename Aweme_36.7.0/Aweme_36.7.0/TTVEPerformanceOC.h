@interface TTVEPerformanceOC : NSObject

@property (nonatomic) struct shared_ptr<performance::TTVEPerformance> { struct TTVEPerformance *__ptr_; struct __shared_weak_count *__cntrl_; } mPerformance;

- (void)setCallBack:(id /* block */)a0;
- (void)setControlPeriod:(unsigned int)a0;
- (int)executeStrategy;
- (id)initWithDynamicMode:(BOOL)a0;
- (void)setModelStrategy:(id)a0;
- (int)buildRecorderOC:(id)a0;
- (int)forceRunOnce:(BOOL)a0;
- (void).cxx_destruct;
- (int)stop:(BOOL)a0;
- (id)init;
- (int)prepare;
- (id).cxx_construct;
- (int)run;

@end
