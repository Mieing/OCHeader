@class NSArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESSCAudioTapProcessorChain : NSObject <NSCopying>

@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } processingFormat;
@property (nonatomic) BOOL bufferListValid;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *bufferListValidLock;
@property (copy, nonatomic) NSArray *nodes;

- (void)audioTapWillDealloc;
- (void)prepareProcess:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
- (void)processTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 bufferListInOut:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a1;
- (BOOL)isBufferListValid;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
