@interface MtlRenderDeviceBlockParam : NSObject {
    void *m_renderSystem;
}

- (id)initWithRenderSystem:(void *)a0;
- (void)detachRenderSystem;
- (void)releaseBufferByFlag:(unsigned long long)a0;
- (void)dealloc;

@end
