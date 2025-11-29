@class TXCVideoTextureFrame, TXCVideoDataFrame, NSArray;

@interface TXCVideoFrame : NSObject {
    struct unique_ptr<liteav::video::VideoFrame, std::default_delete<liteav::video::VideoFrame>> { struct __compressed_pair<liteav::video::VideoFrame *, std::default_delete<liteav::video::VideoFrame>> { struct VideoFrame *__value_; } __ptr_; } _encodedData;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) TXCVideoTextureFrame *textureData;
@property (readonly, nonatomic) TXCVideoDataFrame *dataFrame;
@property (readonly, nonatomic) void *encodedData;
@property (nonatomic) unsigned int pts;
@property (nonatomic) unsigned int dts;
@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) unsigned long long format;
@property (nonatomic) unsigned int orientation;
@property (nonatomic) struct shared_ptr<liteav::video::PixelFrameMetaData> { struct PixelFrameMetaData *__ptr_; struct __shared_weak_count *__cntrl_; } metaData;
@property (copy, nonatomic) NSArray *roiConfigArray;

+ (unsigned int)orientationFromRotation:(int)a0;

- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 pts:(unsigned int)a1;
- (id)initWithTexture:(unsigned int)a0 width:(long long)a1 height:(long long)a2;
- (id)initWithFrameBuffer:(id)a0 pts:(unsigned int)a1;
- (id)initWithDataFrame:(id)a0 pts:(unsigned int)a1;
- (id)initWithEncodedData:(struct unique_ptr<liteav::video::VideoFrame, std::default_delete<liteav::video::VideoFrame>> { struct __compressed_pair<liteav::video::VideoFrame *, std::default_delete<liteav::video::VideoFrame>> { struct VideoFrame *x0; } x0; })a0;
- (void)setup;
- (struct unique_ptr<liteav::video::VideoFrame, std::default_delete<liteav::video::VideoFrame>> { struct __compressed_pair<liteav::video::VideoFrame *, std::default_delete<liteav::video::VideoFrame>> { struct VideoFrame *x0; } x0; })moveEncodedVideoFrame;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
