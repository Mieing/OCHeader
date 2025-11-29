@class NSString, NSArray;

@interface BDXLynxMapRendererFactoryManager : NSObject <BDXLynxMapRendererFactory> {
    NSArray *_factories;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managerWithRendererFactories:(id)a0;

- (BOOL)canRenderForOverlay:(id)a0;
- (id)rendererForOverlay:(id)a0 inMapView:(id)a1;
- (void).cxx_destruct;

@end
