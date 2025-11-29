@class NSString;

@interface SECLynxPiperMonitor : NSObject <SECLynxPlugin, SECLynxBuilderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lynxViewWillDealloc:(id)a0;
- (void)lynx:(id)a0 piperWillInvoke:(id)a1;
- (void)onLynxPiperResponsed:(id)a0;

@end
