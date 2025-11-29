@class NSString;

@interface MMKSAudioProcessor : NSObject <KSAudioProcessorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)prepare:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 err:(id *)a1;
- (void)processLPCM:(void *)a0 len:(unsigned int *)a1 maxLen:(unsigned int)a2 ioNum:(unsigned int *)a3;
- (void)seek:(double)a0;
- (void)dispose;
- (void)preparePCMOutPutWithMaxPacketSize:(unsigned int *)a0 audioBufferCount:(unsigned int *)a1;

@end
