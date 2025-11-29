@class Protocol;

@interface RACDelegateProxy : NSObject {
    Protocol *_protocol;
}

@property (nonatomic) id rac_proxiedDelegate;

- (id)signalForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isProxy;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
