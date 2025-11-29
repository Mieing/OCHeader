@class NSString;

@interface SECTTBridgeBPEAPlugin : NSObject <TTBridgeInterceptor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)enablePlugin:(BOOL)a0;

- (void)bridgeEngine:(id)a0 willExecuteBridgeCommand:(id)a1;
- (void)bridgeEngine:(id)a0 willCallbackBridgeCommand:(id)a1;

@end
