@interface HTSLiveAvatarCommon : IESLivePBBaseMessage

@property (nonatomic) long long formatId;
@property (nonatomic) long long roomId;
@property (nonatomic) long long bizRequestId;

+ (id)descriptor;

@end
