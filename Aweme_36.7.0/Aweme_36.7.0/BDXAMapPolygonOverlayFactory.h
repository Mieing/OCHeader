@class NSString;

@interface BDXAMapPolygonOverlayFactory : NSObject <BDXLynxMapOverlayFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canGenerateOverlayForBridgeModels:(id)a0;
- (void)generateOverlaysWithBridgeModels:(id)a0 completion:(id /* block */)a1;

@end
