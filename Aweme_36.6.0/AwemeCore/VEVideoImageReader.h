@class NSURL, VEVideoConfig, NSObject;
@protocol OS_dispatch_queue;

@interface VEVideoImageReader : VEVideoReader

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastTime;
@property (nonatomic) struct __CVBuffer { } *imageBuffer;
@property (retain, nonatomic) NSURL *picUrl;
@property (retain, nonatomic) NSURL *originalPicUrl;
@property (nonatomic) struct __CVBuffer { } *originalPicImageBufer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imageDecodeQueue;
@property (retain, nonatomic) VEVideoConfig *config;

- (BOOL)p_isHeifImage:(id)a0;
- (void)readPicture;
- (struct __CVBuffer { } *)createImageBufferFromOriginalPath;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)updateVideoConfig:(id)a0;
- (id)copySampleBufferAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
