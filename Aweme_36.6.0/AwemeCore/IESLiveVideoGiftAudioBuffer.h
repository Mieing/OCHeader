@interface IESLiveVideoGiftAudioBuffer : NSObject

@property (nonatomic) struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *ioData;
@property (nonatomic) unsigned int inNumberFrames;
@property (nonatomic) unsigned int cacheSize;
@property (nonatomic) long long type;
@property (nonatomic) unsigned int start;

- (id)initWithFrameCount:(unsigned int)a0 channels:(unsigned int)a1 bytePerFrame:(unsigned int)a2;
- (void)giveBack;
- (void)dealloc;

@end
