@interface NLELayer_OC : NSObject

@property (nonatomic) struct shared_ptr<nleimage_api::Layer> { struct Layer *__ptr_; struct __shared_weak_count *__cntrl_; } cppLayer;
@property (nonatomic) double pixelRatio;
@property (nonatomic) struct CGPoint { double x0; double x1; } translate;
@property (nonatomic) struct CGPoint { double x0; double x1; } scale;
@property (nonatomic) double rotate;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

- (id)getResources;
- (id)getLayers;
- (id)getLayer:(id)a0;
- (id)initWithCPPLayer:(struct shared_ptr<nleimage_api::Layer> { struct Layer *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<nleimage_api::Layer> { struct Layer *x0; struct __shared_weak_count *x1; })getCPPLayer;
- (void).cxx_destruct;
- (id)getType;
- (id)getId;
- (id).cxx_construct;

@end
