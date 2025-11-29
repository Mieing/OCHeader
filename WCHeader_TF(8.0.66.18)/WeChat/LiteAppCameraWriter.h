@class GPUImageFramebuffer, NSString, AVAssetWriterInput, NSURL, AQAudioRecorder, NSObject, AVAssetWriterInputPixelBufferAdaptor;
@protocol OS_dispatch_queue, LiteAppCameraWriterDelegate;

@interface LiteAppCameraWriter : GPUImageMovieWriter <GPUImageMovieWriterDelegate, AudioRecorderDelegate> {
    GPUImageFramebuffer *inputFramebufferForDisplay;
}

@property (retain, nonatomic) NSString *m_videoPath;
@property (retain, nonatomic) NSString *m_audioPath;
@property (retain, nonatomic) NSString *m_moviePath;
@property (nonatomic) BOOL m_isRecording;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } m_startTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } m_initializeTime;
@property (nonatomic) BOOL m_isLowPerformance;
@property (retain, nonatomic) AVAssetWriterInput *m_videoInput;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } m_previousVideoTime;
@property (nonatomic) unsigned long long m_videoTimeStamp;
@property (nonatomic) unsigned long long m_videoFrame;
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *m_PixelBufferInput;
@property (nonatomic) double m_audioBitrate;
@property (nonatomic) struct CGSize { double width; double height; } m_videoSize;
@property (nonatomic) long long m_videoOrientation;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } m_preferredTransform;
@property (nonatomic) unsigned long long m_audioTimeStamp;
@property (nonatomic) BOOL m_disableWritingToFile;
@property (nonatomic) unsigned long long m_recordTimeStamp;
@property (retain, nonatomic) AQAudioRecorder *recorder;
@property (nonatomic) float maxMovieDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } correctVideoDuration;
@property (nonatomic) long long videoOrientation;
@property (readonly, nonatomic) int outputType;
@property (nonatomic) BOOL forceMPEG4;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writtingQueue;
@property (retain, nonatomic) NSURL *outputURL;
@property (weak, nonatomic) id<LiteAppCameraWriterDelegate> writerDelegate;
@property (nonatomic) BOOL m_compressAudio;
@property (nonatomic) BOOL muteAudio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMovieURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithMovieURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 fileType:(id)a2 outputSettings:(id)a3;
- (void)setupWriterWithPath:(id)a0;
- (void)movieRecordingFirstFrameTime:(id)a0;
- (void)setOutput:(id)a0;
- (id)getOutput;
- (BOOL)isWriting;
- (id)makeNewPath:(id)a0 withSubfix:(id)a1;
- (void)compressMovieWithExport:(id)a0;
- (void)notifyOutput:(id)a0;
- (void)tryMergeOutputVideo;
- (void)startAmr;
- (void)OnRecorderBeginRecording:(id)a0 ErrNo:(int)a1;
- (void)stopAmr;
- (void)cancelAmr;
- (void)startRecording;
- (void)startRecordingInOrientation:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)finishRecording;
- (void)cancelRecording;
- (void)finishRecordingWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
