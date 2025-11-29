@class NSObject, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

@interface GPUImageFramebufferCache : NSObject {
    NSMutableDictionary *framebufferCache;
    NSMutableDictionary *framebufferTypeCounts;
    NSMutableArray *activeImageCaptureList;
    id memoryWarningObserver;
    NSObject<OS_dispatch_queue> *framebufferCacheQueue;
}

- (id)init;
- (void)dealloc;
- (id)hashForSize:(struct CGSize { double x0; double x1; })a0 textureOptions:(struct GPUTextureOptions { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; BOOL x7; })a1 onlyTexture:(BOOL)a2;
- (id)fetchFramebufferForSize:(struct CGSize { double x0; double x1; })a0 textureOptions:(struct GPUTextureOptions { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; BOOL x7; })a1 onlyTexture:(BOOL)a2;
- (id)fetchFramebufferForSize:(struct CGSize { double x0; double x1; })a0 textureOptions:(struct GPUTextureOptions { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; BOOL x7; })a1 onlyTexture:(BOOL)a2 useRGB2YUV420:(BOOL)a3;
- (id)fetchFramebufferForSize:(struct CGSize { double x0; double x1; })a0 onlyTexture:(BOOL)a1;
- (void)returnFramebufferToCache:(id)a0;
- (void)purgeAllUnassignedFramebuffers;
- (void)addFramebufferToActiveImageCaptureList:(id)a0;
- (void)removeFramebufferFromActiveImageCaptureList:(id)a0;
- (void).cxx_destruct;

@end
