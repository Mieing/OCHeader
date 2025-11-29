@class CIContext, NSObject;
@protocol OS_dispatch_queue, MMFinderReplayKitVideoEncoderDelegate;

@interface MMFinderReplayKitVideoEncoder : NSObject {
    struct OpaqueVTCompressionSession { } *_session;
    struct EncodeParamsTypeHeader { unsigned short is_annexb; unsigned short rc_method; float width; float height; unsigned int framerate; unsigned int bitrate; unsigned int gop; } _param;
    unsigned long long _frameIndex;
    struct OpaqueVTPixelRotationSession { } *_rotation_session_;
    unsigned long long _bitrate_health_degree_timestamp;
    unsigned long long _bitrate_health_check_interval;
    float _bitrate_health_degree;
    float _bitrate_health_lower_limit;
    float _bitrate_health_upper_limit;
    unsigned int _encoded_data_length_bytes;
    BOOL _should_restart;
    long long _rc_limit;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CIContext *rotateContext;
@property (weak, nonatomic) id<MMFinderReplayKitVideoEncoderDelegate> delegate;
@property (nonatomic) BOOL isLandscape;

- (id)initWithDelegate:(id)a0;
- (BOOL)updateLandscape:(BOOL)a0;
- (void)sendVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 needsIFrame:(BOOL)a2 isLandscape:(BOOL)a3 orientation:(long long)a4 rcLimit:(long long)a5;
- (void)stop;
- (void)updateParams:(struct EncodeParamsTypeHeader { unsigned short x0; unsigned short x1; float x2; float x3; unsigned int x4; unsigned int x5; unsigned int x6; })a0;
- (void)updateEncodeSize;
- (void)forceRestartEncoder;
- (int)configEncoder;
- (void)onCodecFinished:(void *)a0 status:(int)a1 infoFlags:(unsigned int)a2 sampleBufferRef:(struct opaqueCMSampleBuffer { } *)a3;
- (struct __CVBuffer { } *)newRotateCVPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(long long)a1;
- (struct __CVBuffer { } *)newRotateCVPixelBuffer:(struct __CVBuffer { } *)a0 rotation:(int)a1;
- (BOOL)RotateCVPixelBufferIOS16:(struct __CVBuffer { } *)a0 destination:(struct __CVBuffer { } *)a1 rotation:(int)a2;
- (void).cxx_destruct;

@end
