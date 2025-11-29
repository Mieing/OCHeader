@protocol VEAudioPlayerProtocol;

@interface VEAudioReaderUnitConfig : NSObject

@property (nonatomic) BOOL useForPlayer;
@property (nonatomic) BOOL enableMultiTrack;
@property (nonatomic) BOOL disableDurationCheck;
@property (nonatomic) BOOL isRecordingScenes;
@property (nonatomic) BOOL useRealAudioDuration;
@property (nonatomic) unsigned int processFrameCount;
@property (nonatomic) BOOL disableVideoAssets;
@property (nonatomic) BOOL disableTimeoutSkip;
@property (nonatomic) BOOL disableAVAudioCheck;
@property (retain, nonatomic) id<VEAudioPlayerProtocol> audioQueueUnit;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;

- (void).cxx_destruct;
- (id)init;

@end
