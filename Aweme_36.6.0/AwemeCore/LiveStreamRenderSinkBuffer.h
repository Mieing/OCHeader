@interface LiveStreamRenderSinkBuffer : NSObject

@property (nonatomic) void *mData;
@property (nonatomic) int mBufferSize;
@property (nonatomic) int sampleRate;
@property (nonatomic) int channels;
@property (nonatomic) int samplesPerChannel;
@property (nonatomic) unsigned int timestamp;

- (id)init;
- (void)reset;
- (void)dealloc;

@end
