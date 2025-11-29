@interface IESSCReverseSampleBufferHolder : NSObject

@property (nonatomic) struct opaqueCMSampleBuffer { } *sampleBuffer;
@property (readonly, nonatomic) double presentationTime;

- (void)dealloc;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
