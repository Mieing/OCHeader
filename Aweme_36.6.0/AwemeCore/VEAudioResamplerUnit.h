@interface VEAudioResamplerUnit : IESMMObject

@property (nonatomic) struct OpaqueAudioConverter { } *converter;
@property (nonatomic) struct AudioBufferList { unsigned int mNumberBuffers; struct AudioBuffer { unsigned int mNumberChannels; unsigned int mDataByteSize; void *mData; } mBuffers[1]; } bufferList;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } targetAsbd;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } sourceAsbd;
@property (nonatomic) struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } *convertBuffer;
@property (nonatomic) int kBytesPerPacket;

- (id)initWithSourceAsbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 targetAsbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1;
- (void)convertSrcBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 toBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a1 isFullCache:(BOOL)a2;
- (void)p_convertSrcBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 toBufferQuene:(struct AudioBufferQueue { char *x0; unsigned int x1; } *)a1 isFullCache:(BOOL)a2;
- (unsigned int)resampleDatasie:(unsigned int)a0;
- (void)updateAsbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;
- (void)convertSrcBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 toBufferQuene:(struct AudioBufferQueue { char *x0; unsigned int x1; } *)a1 isFullCache:(BOOL)a2;
- (void)dealloc;

@end
