@class TempoFunction;

@interface TempoFunctionCallback : NSObject

@property (retain, nonatomic) TempoFunction *function;
@property (nonatomic) struct shared_ptr<TempoScriptExecutor> { struct TempoScriptExecutor *__ptr_; struct __shared_weak_count *__cntrl_; } executor;
@property (nonatomic) BOOL disableTryCatch;
@property (nonatomic) long long numberOfParams;

- (id)executeCallback:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
