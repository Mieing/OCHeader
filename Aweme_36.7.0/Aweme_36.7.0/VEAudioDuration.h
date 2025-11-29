@interface VEAudioDuration : IESMMObject {
    struct OpaqueAudioFileStreamID { } *_audioFileStreamID;
    BOOL _discontinuous;
    unsigned long long _processedPacketsCount;
    unsigned long long _processedPacketsSizeTotal;
    long long _dataOffset;
}

@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL readyToProducePackets;
@property (nonatomic) double packetDuration;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) BOOL ended;

- (void)getAudioDuration:(id)a0 completion:(id /* block */)a1;
- (void)closeAudioFileStream;
- (void)calculatepPacketDuration;
- (void)handleAudioFileStreamProperty:(unsigned int)a0;
- (void)handleAudioFileStreamPackets:(const void *)a0 numberOfBytes:(unsigned int)a1 numberOfPackets:(unsigned int)a2 packetDescriptions:(struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } *)a3;
- (int)parseData:(id)a0;
- (void).cxx_destruct;
- (float)getDuration;
- (void)dealloc;

@end
