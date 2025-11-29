@class NSString;

@interface LynxExtensionService : NSObject <LynxServiceExtensionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onLynxEnvSetup;
- (void)onLynxViewSetup:(id)a0 group:(id)a1 config:(id)a2;
- (void)onLynxViewDestroy;
- (void)setUpWasm;
- (void)setUpLynxKryptonWithContext:(id)a0 group:(id)a1;
- (void)setUpBDLynxBridgeWithContext:(id)a0 config:(id)a1;

@end
