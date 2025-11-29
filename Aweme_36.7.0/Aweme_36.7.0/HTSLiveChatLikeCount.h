@interface HTSLiveChatLikeCount : IESLivePBBaseMessage

@property (nonatomic) BOOL isLike;
@property (nonatomic) long long count;
@property (nonatomic) long long version;

+ (id)descriptor;

@end
