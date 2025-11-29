@interface OMJRenderView : UIView

@property (readonly, nonatomic) struct shared_ptr<XMJRenderView> { struct XMJRenderView *__ptr_; struct __shared_weak_count *__cntrl_; } backingView;

- (id)initWithBackingView:(struct shared_ptr<XMJRenderView> { struct XMJRenderView *x0; struct __shared_weak_count *x1; })a0;
- (void)dealloc;
- (void)teardownIfNeeded;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
