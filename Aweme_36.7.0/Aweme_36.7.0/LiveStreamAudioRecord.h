@class NSURL, NSString;

@interface LiveStreamAudioRecord : NSObject {
    BOOL _writing;
    struct OpaqueExtAudioFile { } *_audioFile;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _audioDescription;
    struct OpaqueAudioFileID { } *_recordFile;
    NSString *_recordFilePath;
    long long _ticketId;
    float _maxRecordingDuration;
}

@property (nonatomic) BOOL stopped;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSURL *recordUrl;
@property (nonatomic) BOOL wavFormat;

- (id)uniqueURLWithPrefix:(id)a0;
- (id)LS_createFinalURL;
- (void)forceStopRecording;
- (void)finishWritingComplete:(id /* block */)a0;
- (id)initWithAudioDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;
- (void)pauseWriting;
- (void)startWriting:(id)a0 ticketId:(long long)a1 maxRecordingDuration:(float)a2 withCompleteHandler:(id /* block */)a3;
- (int)processAudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 inNumberFrames:(unsigned int)a1 bufferDuration:(double)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
