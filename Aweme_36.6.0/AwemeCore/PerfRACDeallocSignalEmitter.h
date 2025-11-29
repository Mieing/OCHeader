@class RACCompoundDisposable;

@interface PerfRACDeallocSignalEmitter : NSObject

@property (retain, nonatomic) RACCompoundDisposable *compoundDisposable;

- (id)willDeallocSignal;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
