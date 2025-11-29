@class NSURL;

@interface IESAudioConverter : IESMMObject {
    char *_buffer;
    struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *_bufferList;
    struct OpaqueAudioFileID { } *_audioFileID;
    struct OpaqueAudioConverter { } *_audioConverter;
    struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } *_packageFormat;
    long long _readedPacket;
    unsigned long long _packetNums;
    double _startTime;
    double _timeOffset;
}

@property (nonatomic) unsigned long long musicType;
@property (nonatomic) double duration;
@property (nonatomic) double currentTime;
@property (readonly, nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } destinationFormat;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) NSURL *audioURL;

- (int)convertNewFile:(id)a0 fromTime:(double)a1;
- (void)adjustTimeOffset:(double)a0;
- (void)resetConverter;
- (void)switchMusicType:(unsigned long long)a0;
- (int)convertNewFile:(id)a0 fromTime:(double)a1 musicType:(unsigned long long)a2;
- (int)renderIOData:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 outputPacketSize:(unsigned int *)a1;
- (void)destory;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;
- (void)seekToTime:(double)a0;
- (void)dealloc;

@end
