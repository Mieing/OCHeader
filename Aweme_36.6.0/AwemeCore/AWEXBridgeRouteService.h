@class NSString;

@interface AWEXBridgeRouteService : NSObject <BDXBridgeRouteServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openSchemaWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)createJumpSourceBtmTokenWithParamModel:(id)a0;

@end
