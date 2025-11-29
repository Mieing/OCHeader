@class RACSignal, PerfRACDeallocSignalEmitter;

@interface ACCRACDeallocSignalABShim : NSObject

@property (readonly, nonatomic) PerfRACDeallocSignalEmitter *deallocSignal;
@property (readonly, nonatomic) RACSignal *willDeallocSignal;

+ (BOOL)shouldOpenRACPerf;

- (void).cxx_destruct;
- (id)init;

@end
