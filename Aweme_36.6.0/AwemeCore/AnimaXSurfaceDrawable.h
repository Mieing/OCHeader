@class CALayer;

@interface AnimaXSurfaceDrawable : NSObject

@property (weak, nonatomic) CALayer *layer;
@property (nonatomic) struct __CVBuffer { } *buffer;
@property (nonatomic) unsigned long long renderTarget;

- (struct unique_ptr<lynx::animax::AnimaXSurface, std::default_delete<lynx::animax::AnimaXSurface>> { struct AnimaXSurface *x0; })updateAnimaXSurface:(struct unique_ptr<lynx::animax::AnimaXSurface, std::default_delete<lynx::animax::AnimaXSurface>> { struct AnimaXSurface *x0; })a0;
- (struct unique_ptr<lynx::animax::AnimaXSurface, std::default_delete<lynx::animax::AnimaXSurface>> { struct AnimaXSurface *x0; })createAnimaXSurface;
- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;
- (id)initWithBuffer:(struct __CVBuffer { } *)a0;

@end
