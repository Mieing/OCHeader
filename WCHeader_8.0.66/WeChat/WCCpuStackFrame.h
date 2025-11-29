@interface WCCpuStackFrame : NSObject

@property (nonatomic) unsigned int cpu_thread;
@property (nonatomic) float cpu_value;

- (id)initWithThread:(unsigned int)a0 andCpuValue:(float)a1;

@end
