@class AWEGraphicsLayer;

@interface AWEGraphicsRenderer : NSObject

@property (readonly, nonatomic) AWEGraphicsLayer *layer;

+ (id)rendererWithLayer:(id)a0;
+ (id)rendererWithLayerConstructor:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;
- (id)render;
- (id)_render;
- (void)renderWithCompletion:(id /* block */)a0;

@end
