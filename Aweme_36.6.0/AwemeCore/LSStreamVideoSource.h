@class LiveStreamLinkInfo, VideoSource;

@interface LSStreamVideoSource : LSStreamMediaSource {
    VideoSource *videoSource;
    struct scoped_refptr<avframework::VideoTrackInterface> { struct VideoTrackInterface *ptr_; } videoTrack;
    struct scoped_refptr<avframework::ObjcVideoTrackSource> { struct ObjcVideoTrackSource *ptr_; } objcVideoTrackSource;
}

@property (retain, nonatomic) LiveStreamLinkInfo *currentLinkInfo;
@property (nonatomic) BOOL mReduceMode;

- (void)pushVideoBuffer:(struct __CVBuffer { } *)a0 texture:(int)a1 andCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)initWithLinkInfo:(id)a0 withReduceMode:(BOOL)a1;
- (id)linkInfo;
- (void)setupWithMediaEngineFactory:(struct MediaEngineFactoryInterface { void /* function */ **x0; } *)a0;
- (id)trackID;
- (void).cxx_destruct;
- (void)removeTrack:(void *)a0;
- (id).cxx_construct;
- (void)dealloc;
- (void)addTrack:(void *)a0;

@end
