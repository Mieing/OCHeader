@class NSString;

@interface HTSLiveAvatarWord : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *word;
@property (nonatomic) float start;
@property (nonatomic) float end;

+ (id)descriptor;

@end
