@class NSString;

@interface SECLynxBridgeClient : NSObject <LynxViewLifecycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedClient;

- (id)fetchPlugins;
- (void)onPiperInvoked:(id)a0;
- (void)onPiperResponsed:(id)a0;

@end
