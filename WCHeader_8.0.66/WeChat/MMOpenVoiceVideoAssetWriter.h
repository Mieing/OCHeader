@class AVAssetWriterInputPixelBufferAdaptor, AVAssetWriterInput, NSURL, MMOpenVoiceMember, NSObject, AVAssetWriter;
@protocol OS_dispatch_queue;

@interface MMOpenVoiceVideoAssetWriter : NSObject {
    NSObject<OS_dispatch_queue> *_workerQueue;
    struct opaqueCMFormatDescription { } *_audioFormatDesc;
}

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) AVAssetWriter *writer;
@property (retain, nonatomic) AVAssetWriterInput *videoInput;
@property (retain, nonatomic) AVAssetWriterInput *audioInput;
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *pixelBufferAdaptor;
@property (nonatomic) double startTime;
@property (nonatomic) double lastAudioDataTimeStamp;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) long long rotation;
@property (nonatomic) long long videoFrameIndex;
@property (nonatomic) int audioFrameIndex;
@property (copy, nonatomic) id /* block */ errorCallback;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) MMOpenVoiceMember *member;
@property (readonly, nonatomic) int audioSampleRate;
@property (readonly, nonatomic) int audioChannels;

- (id)initWithMember:(id)a0 audioSampleRate:(int)a1 audioChannels:(int)a2 errorCallback:(id /* block */)a3;
- (void)dealloc;
- (void)cancel;
- (void)onVideoFrame:(struct __CVBuffer { } *)a0 rotation:(long long)a1;
- (void)appendAudioData:(id)a0 timestamp:(double)a1;
- (void)onAudioData:(id)a0 timestamp:(double)a1;
- (void)setupWithSize:(struct CGSize { double x0; double x1; })a0 rotation:(long long)a1 timestamp:(double)a2;
- (void)finishWithComplete:(id /* block */)a0;
- (unsigned int)frameSizeByte;
- (unsigned int)framesInPacket:(unsigned int)a0;
- (void).cxx_destruct;

@end
