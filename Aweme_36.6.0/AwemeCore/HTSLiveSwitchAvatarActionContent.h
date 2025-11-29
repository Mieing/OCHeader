@interface HTSLiveSwitchAvatarActionContent : IESLivePBBaseMessage

@property (nonatomic) long long avatarId;
@property (nonatomic) int actionType;
@property (nonatomic) long long singleActionId;
@property (nonatomic) long long loopActionIndex;

+ (id)descriptor;

@end
