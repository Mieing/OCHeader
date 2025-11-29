@class NSString;

@interface HTSLiveAudioShowMediaInfo : IESLivePBBaseMessage

@property (nonatomic) int guestVersion;
@property (copy, nonatomic) NSString *showMediaUserId;
@property (nonatomic) int anchorVersion;

+ (id)descriptor;

@end
