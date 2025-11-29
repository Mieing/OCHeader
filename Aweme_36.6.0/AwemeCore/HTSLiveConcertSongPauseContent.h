@class NSString;

@interface HTSLiveConcertSongPauseContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *toast;

+ (id)descriptor;

@end
