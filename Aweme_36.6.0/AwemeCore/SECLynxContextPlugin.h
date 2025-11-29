@class NSString;

@interface SECLynxContextPlugin : NSObject <SECLynxPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lynxView:(id)a0 didLoadContext:(id)a1;
- (void)lynxWillInitWithContext:(id)a0;
- (void)lynxViewWillDealloc:(id)a0;
- (void)lynxBridge:(id)a0 prepareInvokerContext:(id)a1;
- (void)onLynxPiperResponsed:(id)a0;
- (id)sessionContextWithMethod:(id)a0 module:(id)a1 session:(id)a2 inLynx:(id)a3;
- (id)generateFrameworkAPIContextFrom:(id)a0 andPage:(id)a1;
- (id)fixMissingBPEAExtra:(id)a0 message:(id)a1 withAPIContext:(id)a2 andPage:(id)a3;

@end
