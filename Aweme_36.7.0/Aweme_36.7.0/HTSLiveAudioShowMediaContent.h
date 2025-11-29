@class NSString;

@interface HTSLiveAudioShowMediaContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *linkmicId;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *showUserId;

+ (id)descriptor;

@end
