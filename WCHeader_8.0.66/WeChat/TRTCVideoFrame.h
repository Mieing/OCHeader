@class NSData;

@interface TRTCVideoFrame : NSObject

@property (nonatomic) long long pixelFormat;
@property (nonatomic) long long bufferType;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned int textureId;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) long long rotation;

+ (long long)convertPixelFormat:(int)a0;
+ (int)convertToInnerFormat:(long long)a0;

- (void)copyFromNativePixelFrame:(const struct NativePixelFrame { void /* function */ **x0; } *)a0;
- (struct shared_ptr<liteav::video::NativePixelFrame> { struct NativePixelFrame *x0; struct __shared_weak_count *x1; })toNativePixelFrame:(const void *)a0;
- (struct unique_ptr<liteav::video::NativePixelFrame, std::default_delete<liteav::video::NativePixelFrame>> { struct __compressed_pair<liteav::video::NativePixelFrame *, std::default_delete<liteav::video::NativePixelFrame>> { struct NativePixelFrame *x0; } x0; })convertToInnerFrame;
- (id)init;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void).cxx_destruct;

@end
