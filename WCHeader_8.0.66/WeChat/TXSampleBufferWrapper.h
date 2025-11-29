@interface TXSampleBufferWrapper : NSObject

@property (nonatomic) struct opaqueCMSampleBuffer { } *sampleBuffer;

- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)dealloc;

@end
