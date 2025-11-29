@class NSArray, IESMMVideoDataClipRange, NSString;

@interface VEAudioConfig : NSObject <NSCopying>

@property (nonatomic) float p_originalRate;
@property (nonatomic) unsigned long long assetType;
@property (nonatomic) unsigned long long decodeMode;
@property (nonatomic) BOOL disableTimeoutSkip;
@property (retain, nonatomic) IESMMVideoDataClipRange *clipRange;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (nonatomic) float normalRate;
@property (retain, nonatomic) NSArray *audioFilterArray;
@property (nonatomic) BOOL decoderSupportMonoAudio;
@property (nonatomic) BOOL isStreamVCReader;
@property (nonatomic) long long streamVCHandler;
@property (retain, nonatomic) NSString *decryption_key;

- (id)initWithSampleRateAndChannels:(double)a0 channels:(unsigned int)a1;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
