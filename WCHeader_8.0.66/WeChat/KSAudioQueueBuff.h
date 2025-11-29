@interface KSAudioQueueBuff : NSObject {
    struct AudioStreamPacketDescription { long long mStartOffset; unsigned int mVariableFramesInPacket; unsigned int mDataByteSize; } _packetDes[16];
}

@property (readonly, nonatomic) struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *audioBuffer;
@property (readonly, nonatomic) struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } *audioDes;
@property (readonly, nonatomic) unsigned int bufSize;

+ (unsigned int)packDesCnt;

- (id)initWithAudioBuf:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a0 size:(unsigned int)a1;
- (void)dealloc;
- (void)dispose:(struct OpaqueAudioQueue { } *)a0;

@end
