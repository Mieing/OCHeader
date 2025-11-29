@protocol LSLiveAudioMixerProtocol;

@interface LSLiveAudioMixerHandle : NSObject {
    struct OpaqueAUGraph { } *_graph;
    int _mixerNode;
    int _outputNode;
    struct OpaqueAudioComponentInstance { } *_mixerUnit;
    struct OpaqueAudioComponentInstance { } *_outputUnit;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _inputAsbd;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _outputAsbd;
    struct AudioBufferQueue { char *bufferData; unsigned int dataSize; } _srcQueue;
    struct AudioBufferQueue { char *bufferData; unsigned int dataSize; } _dstQueue;
    long long _maxElementCount;
}

@property (weak, nonatomic) id<LSLiveAudioMixerProtocol> delegate;

- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })getDefaultAudioBasicDescription;
- (void)initializeAUGraph;
- (void)p_createNodes;
- (void)setupMixerUnit;
- (void)setupOutputUnit;
- (id)initWithConfig:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 outputDesc:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1 maxElementCount:(long long)a2;
- (void)setVolume:(double)a0 elementIndex:(int)a1;
- (void)processAudioBufferData:(short *)a0 size:(unsigned int)a1 inNumberFrames:(unsigned int)a2;
- (void)processAudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 inNumberFrames:(unsigned int)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (double)getVolume:(int)a0;

@end
