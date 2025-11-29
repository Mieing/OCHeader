@class NSString;

@interface IESLiveStreamXPresetParamAudioProfile : IESLivePBBaseMessage

@property (nonatomic) int bitrate;
@property (copy, nonatomic) NSString *channelLayout;
@property (copy, nonatomic) NSString *encoder;
@property (nonatomic) int sampleRate;

+ (id)descriptor;

@end
