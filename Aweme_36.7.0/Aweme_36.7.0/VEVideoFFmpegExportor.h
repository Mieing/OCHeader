@class VEVideoExportAsyncQueue, VECurveTransUtils, VEFFmpegReaderUnit, NSString, NSCondition, VEVideoConfig, VECompileVTDecoderUnit, NSObject, VEffmpegReader;
@protocol OS_dispatch_queue;

@interface VEVideoFFmpegExportor : VEVideoReader <VEAppStatusProtocol>

@property (retain, nonatomic) VEffmpegReader *ffmepgeReader;
@property (retain, nonatomic) VEFFmpegReaderUnit *readerUnit;
@property (retain, nonatomic) VECompileVTDecoderUnit *decodeUnit;
@property (nonatomic) unsigned long long asyncThreadStatus;
@property (retain, nonatomic) VEVideoExportAsyncQueue *videoAyncQue;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastValidTime;
@property (retain, nonatomic) VEVideoConfig *config;
@property BOOL seekReq;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } seekTime;
@property (nonatomic) struct opaqueCMFormatDescription { } *vtDesc;
@property (retain, nonatomic) VECurveTransUtils *curveTransUtils;
@property BOOL suspendForBackground;
@property (retain, nonatomic) NSCondition *stateReadyCond;
@property (nonatomic) BOOL enableOptFill;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *decodeQueue;
@property (nonatomic) BOOL isDecoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unPrepare;
- (void)seekToTimeProcess:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })p_convertTimeLineToVideoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)p_releaseVtDesc;
- (void)p_setVtDesc:(struct opaqueCMFormatDescription { } *)a0;
- (void)becomeActive;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)enterBackground;
- (void)resignActive;
- (void)stop;
- (void)prepare;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)enterForeground;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (id)copyNextSampleBuffer;
- (void)memoryWarning;
- (id)copySampleBufferAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
