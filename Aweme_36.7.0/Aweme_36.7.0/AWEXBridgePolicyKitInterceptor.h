@class NSString;

@interface AWEXBridgePolicyKitInterceptor : NSObject <BDXBridgeInterceptor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBridgeContext:(id)a0 forMethod:(id)a1 container:(id)a2 params:(id)a3;
- (void)xBridgeWillCallbackMethod:(id)a0 container:(id)a1 statusCode:(long long)a2 message:(id)a3 resultModel:(id)a4;

@end
