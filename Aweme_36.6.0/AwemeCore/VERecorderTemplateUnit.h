@class VEMVPRenderer, VEPreviewUnit, HTSGLContext, VEAudioReaderUnit, VEVideoReaderUnit;

@interface VERecorderTemplateUnit : NSObject

@property (retain, nonatomic) HTSGLContext *context;
@property (retain, nonatomic) VEAudioReaderUnit *audioReader;
@property (retain, nonatomic) VEVideoReaderUnit *videoReader;
@property (retain, nonatomic) VEMVPRenderer *pixelBufferRenderer;
@property (retain, nonatomic) VEPreviewUnit *preview;
@property (nonatomic) BOOL audioMuted;
@property (nonatomic) BOOL isSeekingAudio;
@property (nonatomic) double volume;
@property (nonatomic) BOOL pause;
@property (nonatomic) BOOL mute;
@property (nonatomic) unsigned long long rotationMode;

- (void)syncFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (double)templateTotalDuration;
- (void)resetVideoData:(id)a0 preview:(id)a1 firstFrameRenderCallback:(id /* block */)a2;
- (void)p_resetVideoData:(id)a0 preview:(id)a1 firstFrameRenderCallback:(id /* block */)a2;
- (void)p_syncVideoFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)p_syncAudioFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)p_playAudioIfNeeded;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;
- (void)dealloc;

@end
