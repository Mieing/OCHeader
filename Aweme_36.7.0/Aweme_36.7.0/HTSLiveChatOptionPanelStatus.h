@interface HTSLiveChatOptionPanelStatus : IESLivePBBaseMessage

@property (nonatomic) long long targetMsgId;
@property (nonatomic) long long likeCount;
@property (nonatomic) BOOL isLike;
@property (nonatomic) BOOL isDislike;
@property (nonatomic) long long version;

+ (id)descriptor;

@end
