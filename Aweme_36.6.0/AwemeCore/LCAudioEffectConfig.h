@interface LCAudioEffectConfig : NSObject

@property (nonatomic) unsigned long long scene;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } audioStreamBasicDescription;

+ (id)configWithScene:(unsigned long long)a0;

- (id)defaultReverb2Format;
- (id)init;

@end
