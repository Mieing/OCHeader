@class NSString, NSMapTable;

@interface OSCDIProxy : NSProxy <OSCDIProxy>

@property (retain, nonatomic) NSMapTable *objectsByProtocolName;
@property (retain, nonatomic) NSMapTable *targetsByActionName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)injectDependencyObject:(id)a0 forProtocol:(id)a1;
- (void)injectDependencyTarget:(id)a0 forAction:(SEL)a1;
- (id)injectedObjectForProtocol:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;

@end
