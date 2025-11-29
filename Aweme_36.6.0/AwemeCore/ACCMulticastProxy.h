@class Protocol;

@interface ACCMulticastProxy : NSProxy

@property (retain, nonatomic) Protocol *proto;
@property (copy, nonatomic) id /* block */ targets;
@property (copy, nonatomic) id /* block */ willForwardInvocation;

+ (struct objc_method_description { SEL x0; char *x1; })methodSignatureOfProtocol:(id)a0 with:(SEL)a1;

- (id)initWithProtocol:(id)a0 targets:(id /* block */)a1;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
