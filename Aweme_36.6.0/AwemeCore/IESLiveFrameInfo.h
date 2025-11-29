@interface IESLiveFrameInfo : NSObject

@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *sampleBuffer;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) unsigned long long loopCount;

- (id)initWithBuffer:(struct opaqueCMSampleBuffer { } *)a0 index:(unsigned long long)a1 loop:(unsigned long long)a2;

@end
