@class SAMICore_AudioBuffer;

@interface SAMICore_AecInput : NSObject

@property (retain, nonatomic) SAMICore_AudioBuffer *ref;
@property (retain, nonatomic) SAMICore_AudioBuffer *mic;

- (id)initWithNumberSamples:(int)a0 numberChannels:(int)a1;
- (void)destroy;
- (void)dealloc;

@end
