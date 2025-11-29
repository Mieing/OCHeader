@class NSMutableArray, LiveSdkAudioParams, LiveSdkVideoParams, LiveSdkChannelParams;

@interface LiveSdkParams : WXPBGeneratedMessage

@property (retain, nonatomic) LiveSdkVideoParams *videoParams;
@property (retain, nonatomic) LiveSdkAudioParams *audioParams;
@property (retain, nonatomic) LiveSdkChannelParams *channelParams;
@property (retain, nonatomic) NSMutableArray *channelParamsDesc;

+ (void)initialize;

@end
