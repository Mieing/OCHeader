@class NSString;

@interface HTSLiveAvatarAudioMeta : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *format;
@property (nonatomic) int rate;
@property (nonatomic) int bits;
@property (nonatomic) int channel;

+ (id)descriptor;

@end
