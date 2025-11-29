@class NSURL;

@interface LSLiveAudioUnitConfig : NSObject

@property (retain, nonatomic) NSURL *musicURL;
@property (retain, nonatomic) NSURL *originURL;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (nonatomic) double musicStartTime;
@property (nonatomic) unsigned long long musicType;
@property long long numberOfLoops;
@property (nonatomic) BOOL newPlayerMode;
@property (copy, nonatomic) id /* block */ musicPlayErrorBlock;
@property (nonatomic) BOOL enableFadeInOut;
@property (nonatomic) int fadeInDuration;
@property (nonatomic) int fadeInCurve;
@property (nonatomic) int fadeOutDuration;
@property (nonatomic) int fadeOutCurve;

- (void).cxx_destruct;
- (id)init;

@end
