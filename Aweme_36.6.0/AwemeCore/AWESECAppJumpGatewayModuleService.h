@class NSString;

@interface AWESECAppJumpGatewayModuleService : HTSService <AWESECAppJumpGatewayModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)appJumpGatewayEnabled;
- (long long)appJumpGateway:(id)a0 confirmAction:(id /* block */)a1 cancelAction:(id /* block */)a2;
- (void)showOpenFailedToast;

@end
