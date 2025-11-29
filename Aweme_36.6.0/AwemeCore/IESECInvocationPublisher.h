@class Protocol;

@interface IESECInvocationPublisher : IESECEventPublisher

@property (retain, nonatomic) Protocol *protocol;

- (id)addObserver:(id)a0 withTarget:(id)a1;
- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
