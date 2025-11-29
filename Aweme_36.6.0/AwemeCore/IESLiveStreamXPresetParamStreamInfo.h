@class NSString;

@interface IESLiveStreamXPresetParamStreamInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *streamName;

+ (id)descriptor;

@end
