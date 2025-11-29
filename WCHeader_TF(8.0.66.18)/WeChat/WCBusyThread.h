@interface WCBusyThread : NSObject

@property (nonatomic) unsigned int thread;
@property (nonatomic) float usage;
@property (nonatomic) int depth;
@property (nonatomic) unsigned long long *callstack;

- (id)initWithThread:(unsigned int)a0 usage:(float)a1 depth:(int)a2 callstack:(unsigned long long *)a3;
- (void)dealloc;

@end
