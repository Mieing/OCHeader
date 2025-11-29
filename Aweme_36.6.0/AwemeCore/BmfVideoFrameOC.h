@class NSString;

@interface BmfVideoFrameOC : NSObject <IBmfVideoFrameOC> {
    void *bmf_video_frame_ptr;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)setCVpixelBuffer:(struct __CVBuffer { } *)a0;
- (int)setCpuBuffer:(void **)a0 :(int *)a1 :(int)a2 :(int)a3 :(int)a4 :(int)a5;
- (struct __CVBuffer { } *)getCVPixelBuffer;
- (int)getMetalTextureList:(void *)a0;
- (void *)getNativePtr;
- (int)getMemoryType;
- (id)init;
- (void)dealloc;
- (int)getWidth;
- (int)getHeight;

@end
