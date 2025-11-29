@protocol ResourceHandlerDelegate;

@interface NLEImageRender_OC : NSObject

@property (weak, nonatomic) id<ResourceHandlerDelegate> delegate;
@property (nonatomic) struct shared_ptr<nleimage_api::NLEImageRender> { struct NLEImageRender *__ptr_; struct __shared_weak_count *__cntrl_; } cppImageRender;

+ (id)Create:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (id)Create:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1 backEndType:(int)a2;

- (id)getImageInfo:(id)a0;
- (id)initWithCPPNode:(struct shared_ptr<nleimage_api::NLEImageRender> { struct NLEImageRender *x0; struct __shared_weak_count *x1; })a0;
- (void)detachNativeSurface:(id)a0;
- (void)attachOffscreenSurface:(int)a0 height:(int)a1;
- (void)attachNativeSurface:(id)a0;
- (struct CGSize { double x0; double x1; })getConstraintSize:(struct CGSize { double x0; double x1; })a0;
- (void)setLinearLayoutShortEdgeMaxLength:(int)a0;
- (void)detachOffscreenSurface;
- (void).cxx_destruct;
- (void)setResourceHandler:(id)a0;
- (id).cxx_construct;
- (void)dealloc;

@end
