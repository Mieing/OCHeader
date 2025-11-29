@interface SAMICore_AudioBuffer : NSObject

@property (nonatomic) unsigned int numberChannels;
@property (nonatomic) unsigned int numberSamples;
@property (nonatomic) int isInterleave;
@property (nonatomic) void *data;

- (id)initWithNumberSamples:(int)a0 numberChannels:(int)a1 isInterleave:(BOOL)a2;
- (void)destroy;
- (void)dealloc;

@end
