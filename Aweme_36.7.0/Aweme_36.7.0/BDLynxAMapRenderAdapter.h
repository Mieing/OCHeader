@interface BDLynxAMapRenderAdapter : NSObject <BDKMapRenderProtocols>

- (id)createAnnotationViewFactories;
- (id)createOverlayFactories;
- (id)createRendererFactories;

@end
