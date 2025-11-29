@interface MagicBrushRenderTarget : NSObject

@property (nonatomic) int canvasId;
@property (nonatomic) unsigned long long lastSubmitTime;
@property (nonatomic) struct shared_ptr<magicbrush::MagicBrushRenderTarget> { struct MagicBrushRenderTarget *__ptr_; struct __shared_weak_count *__cntrl_; } rt;

- (void)destroy;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
