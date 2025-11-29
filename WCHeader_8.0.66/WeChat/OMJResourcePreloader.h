@interface OMJResourcePreloader : NSObject

@property (nonatomic) struct WeakPtr<XMJResourcePreloader> { struct XMJResourcePreloader *_ptr; struct WeakRefType *m_refs; } backingPreloader;

- (void)dealloc;
- (id)initWithBackingPreloader:(const void *)a0;
- (void)setConcurrencyLimit:(long long)a0;
- (void)setPreloadResourceSizeLimit:(long long)a0;
- (void)startPreloading;
- (void)stopPreloading;
- (void)updateExpectedResourceUsage:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
