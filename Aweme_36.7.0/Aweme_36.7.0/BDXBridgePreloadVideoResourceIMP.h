@class NSString;

@interface BDXBridgePreloadVideoResourceIMP : NSObject <BDXBridgePreloadVideoResourceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bdx_engineReady;
+ (id)geckoResourcePathForURLString:(id)a0 forestKit:(id)a1;

- (void)preloadVideoResources:(id)a0 forestKit:(id)a1;

@end
