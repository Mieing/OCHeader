@class NSString;

@interface UpdateGameUserInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *openUid;
@property (nonatomic) long long score;
@property (nonatomic) long long gameDuration;

+ (id)descriptor;

@end
