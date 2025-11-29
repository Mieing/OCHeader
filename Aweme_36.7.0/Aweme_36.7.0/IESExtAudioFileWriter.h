@class NSURL, IESAudioConfig;

@interface IESExtAudioFileWriter : NSObject {
    BOOL _writing;
    struct OpaqueExtAudioFile { } *_audioFile;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _audioDescription;
    IESAudioConfig *_config;
}

@property (nonatomic) BOOL stopped;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSURL *recordUrl;

+ (BOOL)HEAACEncodingAvailable;

- (void)finishWritingComplete:(id /* block */)a0;
- (void)pauseWriting;
- (int)processAudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 inNumberFrames:(unsigned int)a1 bufferDuration:(double)a2;
- (int)processAudioBufferListSync:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 inNumberFrames:(unsigned int)a1 bufferDuration:(double)a2;
- (id)finishWritingSync;
- (void)resetDuration;
- (id)initWithAudioDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 config:(id)a1;
- (void)startWriting;
- (void).cxx_destruct;
- (void)dealloc;

@end
