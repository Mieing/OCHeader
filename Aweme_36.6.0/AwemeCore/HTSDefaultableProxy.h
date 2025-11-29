@class Protocol;

@interface HTSDefaultableProxy : NSObject

@property (retain, nonatomic) id impl;
@property (retain, nonatomic) id defaultImpl;
@property (nonatomic) Protocol *protocol;

- (id)initWithAdapterImpl:(id)a0 defaultImpl:(id)a1 protocol:(id)a2;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;

@end
