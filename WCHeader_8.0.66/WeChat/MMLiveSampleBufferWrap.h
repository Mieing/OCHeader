@interface MMLiveSampleBufferWrap : NSObject <NSCopying>

@property (nonatomic) struct opaqueCMSampleBuffer { } *sampleBuffer;

+ (id)bufferWrapFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
