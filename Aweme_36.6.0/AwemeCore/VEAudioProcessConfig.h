@class NSString;

@interface VEAudioProcessConfig : NSObject

@property (nonatomic) long long targetSampleCount;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } micAsbd;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } bgmAsbd;
@property (retain, nonatomic) NSString *modelPath;
@property (nonatomic) float target_lufs;
@property (nonatomic) BOOL needOutput;
@property (nonatomic) BOOL bgmIsNull;
@property (nonatomic) BOOL micIsNull;
@property (nonatomic) BOOL useOutput;

- (void).cxx_destruct;
- (id)init;

@end
