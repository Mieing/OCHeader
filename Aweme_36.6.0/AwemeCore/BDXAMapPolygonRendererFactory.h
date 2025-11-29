@class NSString;

@interface BDXAMapPolygonRendererFactory : NSObject <BDXLynxMapRendererFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canRenderForOverlay:(id)a0;
- (id)rendererForOverlay:(id)a0 inMapView:(id)a1;

@end
